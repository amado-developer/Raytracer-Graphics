//
// Created by Amado Garcia on 9/7/20.
//

#include "Sphere.h"
#include <tuple>
#include <cmath>
#include "Intersect.h"

using namespace std;

Sphere::Sphere(tuple<double, double, double> center, double radius, Materials material)
{
    this->center = center;
    this->radius = radius;
    this->material = material;
}

Sphere::Sphere(tuple<double, double, double> center, double radius)
{
    this->center = center;
    this->radius = radius;

}

Intersect Sphere::rayIntersect(tuple<double, double, double> origin, tuple<double, double, double> direction)
{
    tuple<double, double, double> L{lib.sub(this->center, origin)};
    double tca{lib.dot(L, direction)};
    double l{lib.length(L)};
    double d2{pow(l, 2) - pow(tca, 2)};
    if(d2 < pow(this->radius, 2))
    {
        double thc{pow((pow(this->radius, 2) - d2), 0.5)};
        double t0{tca - thc};
        double t1{tca + thc};

        if (t0 < 0)
            t0 = t1;
        if (t0 > 0)
        {
            auto hit{lib.sum(origin, lib.mult(direction, t0))};
            auto normal{lib.norm(lib.sub(hit, this->center))};
            auto u{1.0 - (atan2(get<2>(normal), get<0>(normal)) / (2.0 * M_PI) + 0.5)};
            auto v{acos(-(get<1>(normal)))/M_PI};
            return Intersect(t0, true, hit, normal, make_tuple(u, v));
        }
    }
}

Materials Sphere::getMaterial()
{
    return this->material;
}
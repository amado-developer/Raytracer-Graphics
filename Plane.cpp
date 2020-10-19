//
// Created by Amado Garcia on 10/12/20.
//

#include "Plane.h"
#include "Lib.h"

Plane::Plane(tuple<double, double, double> position, tuple<double, double, double> normal, Materials material)
{
    this->position = position;
    this->normal = normal;
    this->material = material;
}

Plane::Plane(tuple<double, double, double> position, tuple<double, double, double> normal)
{
    this->position = position;
    this->normal = normal;
}

Materials Plane::getMaterial()
{
    return this->material;
}

Intersect Plane::rayIntersect(tuple<double, double, double> origin, tuple<double, double, double> direction)
{
    auto d{lib.dot(direction, normal)};

    if(abs(d) > 0.0001) {
        auto t{lib.dot(normal, lib.sub(position, origin)) / d};
    if (t > 0.0) {
        auto hit{lib.sum
                (
                        origin,
                        make_tuple(get<0>(direction) * t,
                                   get<1>(direction) * t,
                                   get<2>(direction) * t))
        };
        return Intersect(t, true, hit, normal);
    }
}

return Intersect(0.0, false, make_tuple(0, 0, 0), make_tuple(0,0,0));
}




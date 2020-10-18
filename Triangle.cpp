//
// Created by Amado Garcia on 10/16/20.
//

#include "Triangle.h"


Triangle::Triangle( tuple<tuple<double, double, double>, tuple<double, double, double>, tuple<double, double, double>> vertexes, Materials material)
{
    this->vertexes = vertexes;
    this->material = material;
}

//Code adaptation from https://www.scratchapixel.com/lessons/3d-basic-rendering/ray-tracing-rendering-a-triangle/ray-triangle-intersection-geometric-solution
Intersect Triangle::rayIntersect(tuple<double, double, double> origin, tuple<double, double, double> direction)
{
    auto v0{get<0>(vertexes)};
    auto v1{get<1>(vertexes)};
    auto v2{get<2>(vertexes)};

    auto normal{lib.cross(lib.sub(v1, v0), lib.sub(v2, v0))};

    auto determinant{lib.dot(normal, direction)};
    if(abs(determinant) < 0.0001)
        return Intersect(0.0, false, make_tuple(0,0,0), make_tuple(0,0,0));

    auto distance{lib.dot(normal, v0)};
    auto t{(lib.dot(normal, origin) + distance) / determinant};

    if(t < 0.0)
        return Intersect(0.0, false, make_tuple(0,0,0), make_tuple(0,0,0));

    auto point{lib.sum(origin, lib.mult(direction, t))};
    auto coords{lib.barycentric(v0, v1, v2, make_tuple(get<0>(point), get<1>(point)))};
    auto u{get<0>(coords)};
    auto v{get<1>(coords)};
    auto w{get<2>(coords)};

    if(u < 0.0 || v < 0.0 || w < 0.0)
        return Intersect(0.0, false, make_tuple(0,0,0), make_tuple(0,0,0));

    return Intersect(distance, true, point, lib.norm(normal));
}

Materials Triangle::getMaterial()
{
    return this->material;
}
Triangle::Triangle()
{

}
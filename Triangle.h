//
// Created by Amado Garcia on 10/16/20.
//

#ifndef RAYTRACER_GRAPHICS_TRIANGLE_H
#define RAYTRACER_GRAPHICS_TRIANGLE_H

#include "tuple"
#include "Materials.h"
#include "Intersect.h"
using namespace std;
class Triangle
{
private:
    tuple<tuple<double, double, double>, tuple<double, double, double>, tuple<double, double, double>> vertexes;
    Materials material;
    Lib lib;

public:
    Triangle();
    Triangle( tuple<tuple<double, double, double>, tuple<double, double, double>, tuple<double, double, double>> vertexes, Materials material);
    Intersect rayIntersect(tuple<double, double, double> origin, tuple<double, double, double> direction);
    Materials getMaterial();


};


#endif //RAYTRACER_GRAPHICS_TRIANGLE_H

//
// Created by Amado Garcia on 10/15/20.
//

#ifndef RAYTRACER_GRAPHICS_CUBE_H
#define RAYTRACER_GRAPHICS_CUBE_H

#include "vector"
#include "Plane.h"
#include "Lib.h"
#include "Cube.h"
using namespace std;
class Cube
{
    public:
        Cube(tuple<double, double, double> position, double size, Materials material);
        Cube(tuple<double, double, double> position, double size);
        Intersect rayIntersect(tuple<double, double, double> origin, tuple<double, double, double> direction);
        Materials getMaterial();

private:
        vector<Plane> planes{};
        tuple<double, double, double> position;
        double size;
        Materials material;
        Lib lib;

};


#endif //RAYTRACER_GRAPHICS_CUBE_H

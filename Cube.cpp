//
// Created by Amado Garcia on 10/15/20.
//

#include "Cube.h"
#include "Plane.h"
Cube::Cube(tuple<double, double, double> position, double size, Materials material)
{
    this->position = position;
    this->size = size;
    this->material = material;

    this->planes.push_back(Plane(lib.sum(position, make_tuple(size * 0.5, 0.0, 0.0)), make_tuple(1.0, 0.0, 0.0), material));
    this->planes.push_back(Plane(lib.sum(position, make_tuple(-size * 0.5, 0.0, 0.0)), make_tuple(-1.0, 0.0, 0.0), material));
    this->planes.push_back(Plane(lib.sum(position, make_tuple(0.0, size * 0.5, 0.0)), make_tuple(0.0, 1.0, 0.0), material));
    this->planes.push_back(Plane(lib.sum(position, make_tuple(0.0, -size * 0.5, 0.0)), make_tuple(0.0, -1.0, 0.0), material));
    this->planes.push_back(Plane(lib.sum(position, make_tuple(0.0, 0.0, size * 0.5)), make_tuple(0.0, 0.0, 1.0), material));
    this->planes.push_back(Plane(lib.sum(position, make_tuple(0.0, 0.0, -size * 0.5)), make_tuple(0.0, 0.0, -1.0), material));
}

Cube::Cube(tuple<double, double, double> position, double size)
{
    this->position = position;
    this->size = size;

    this->planes.push_back(Plane(lib.sum(position, make_tuple(size * 0.5, 0.0, 0.0)), make_tuple(1.0, 0.0, 0.0), material));
    this->planes.push_back(Plane(lib.sum(position, make_tuple(-size * 0.5, 0.0, 0.0)), make_tuple(-1.0, 0.0, 0.0), material));
    this->planes.push_back(Plane(lib.sum(position, make_tuple(0.0, size * 0.5, 0.0)), make_tuple(0.0, 1.0, 0.0), material));
    this->planes.push_back(Plane(lib.sum(position, make_tuple(0.0, -size * 0.5, 0.0)), make_tuple(0.0, -1.0, 0.0), material));
    this->planes.push_back(Plane(lib.sum(position, make_tuple(0.0, 0.0, size * 0.5)), make_tuple(0.0, 0.0, 1.0), material));
    this->planes.push_back(Plane(lib.sum(position, make_tuple(0.0, 0.0, -size * 0.5)), make_tuple(0.0, 0.0, -1.0), material));
}

 Intersect Cube::rayIntersect(tuple<double, double, double> origin, tuple<double, double, double> direction)
 {
     double epsilon{0.001};
     vector<double> minBounds{0.0, 0.0, 0.0};
     vector<double> maxBounds{0.0, 0.0, 0.0};

     minBounds[0] = get<0>(position) - (epsilon + size * 0.5);
     maxBounds[0] = get<0>(position) + (epsilon + size * 0.5);

     minBounds[1] = get<1>(position) - (epsilon + size * 0.5);
     maxBounds[1] = get<1>(position) + (epsilon + size * 0.5);

     minBounds[2] = get<2>(position) - (epsilon + size * 0.5);
     maxBounds[2] = get<2>(position) + (epsilon + size * 0.5);

     double t{INFINITY};
     Intersect intersect;
     vector<double> textureCoords{};

     for(auto plane: planes)
     {
         auto planeInter = plane.rayIntersect(origin, direction);

         if(planeInter.distance > 0.0)
         {
             if(get<0>(planeInter.point) >= minBounds[0] && get<0>(planeInter.point) <= maxBounds[0])
             {
                 if(get<1>(planeInter.point) >= minBounds[1] && get<1>(planeInter.point) <= maxBounds[1])
                 {
                     if(get<2>(planeInter.point) >= minBounds[2] && get<2>(planeInter.point) <= maxBounds[2])
                     {
                         if(planeInter.distance < t)
                         {
                             t = planeInter.distance;
                             intersect = planeInter;
                         }
                     }
                 }
             }
         }
     }
     if(intersect.distance == 0.0)
         return Intersect(0.0, false, make_tuple(0,0,0), make_tuple(0,0,0));

     return Intersect(intersect.distance,true, intersect.point, intersect.normal);
 }

Materials Cube::getMaterial() {
    return this->material;
}

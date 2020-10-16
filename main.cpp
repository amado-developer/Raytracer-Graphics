#include <iostream>
#include "Raytracer.h"
#include "Materials.h"
#include "Plane.h"
#include "Texture.h"
#include "Cube.h";
int main()
{
    Raytracer r;
    r.glCreateWindow(800, 600);
    r.glClearColor(50.0, 50.0, 200.0);

    Texture sunTexture("sun.bmp");
    sunTexture.readBackground();

    Materials leaf({110.0, 150.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials eye({0.0, 0.0, 0.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials nose({255, 50.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials antennae({50.0, 50.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    r.setLight(Light(make_tuple(0.5, 2.0, 1.0), 1.0));
    r.type = 1;

    r.setCurrentTexture(sunTexture);
    r.setScene(Sphere(make_tuple(4.0, 4.0, -15.0), 1.0), 0.0);
//    r.setScene(Plane(make_tuple(0.0, 0.0, -10.0), make_tuple(0.0, 1.0, 0.05), leaf));

    //Letter A

    //Left
    r.setScene(Cube(make_tuple(-3.0, -1.0, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.95, -0.75, -5.0),0.25, leaf));
    r.setScene(Cube(make_tuple(-2.90, -0.50, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.85, -0.25, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.80, 0.0, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.70, 0.25, -5.0), 0.25, leaf));

    //Center
    r.setScene(Cube(make_tuple(-2.55, -0.50, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.65, -0.50, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.45, -0.50, -5.0), 0.25, leaf));

    //Top
//    r.setScene(Cube(make_tuple(-2.60, 0.25, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.50, 0.25, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.40, 0.25, -5.0), 0.25, leaf));

    //Right
    r.setScene(Cube(make_tuple(-2.40, 0.0, -5.0),0.25, leaf));
    r.setScene(Cube(make_tuple(-2.35, -0.25, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.30, -0.5, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.25, -0.75, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.20, -1.0, -5.0), 0.25, leaf));
    r.render();

    r.glFinish("project.bmp");
    return 0;
}

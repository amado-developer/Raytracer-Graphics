#include <iostream>
#include "Raytracer.h"
#include "Materials.h"
#include "Plane.h"
#include "Texture.h"
#include "Cube.h";
#include "Triangle.h"
int main()
{
    Raytracer r;
    r.glCreateWindow(800, 600);
    r.glClearColor(50.0, 50.0, 200.0);

    Texture sunTexture("sun.bmp");
    sunTexture.readBackground();

    Materials leaf({110.0, 150.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials eye({150.0, 100.0, 200.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
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
    r.setScene(Cube(make_tuple(-2.60, 0.25, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.50, 0.25, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.40, 0.25, -5.0), 0.25, leaf));

    //Right
    r.setScene(Cube(make_tuple(-2.40, 0.0, -5.0),0.25, leaf));
    r.setScene(Cube(make_tuple(-2.35, -0.25, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.30, -0.5, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.25, -0.75, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-2.20, -1.0, -5.0), 0.25, leaf));

    //Letter M
    //Left
    r.setScene(Cube(make_tuple(-1.9, -1.0, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-1.85, -0.75, -5.0),0.25, leaf));
    r.setScene(Cube(make_tuple(-1.80, -0.50, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-1.75, -0.25, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-1.70, 0.0, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-1.60, 0.25, -5.0), 0.25, leaf));

    //Center
    r.setScene(Cube(make_tuple(-1.445, 0.0, -5.0),0.25, leaf));
    r.setScene(Cube(make_tuple(-1.05, 0.0, -5.0),0.25, leaf));
    r.setScene(Cube(make_tuple(-1.25, -0.25, -5.0),0.25, leaf));

    //Right
    r.setScene(Cube(make_tuple(-0.85, 0.25, -5.0),0.25, leaf));
    r.setScene(Cube(make_tuple(-0.80, 0.0, -5.0),0.25, leaf));
    r.setScene(Cube(make_tuple(-0.75, -0.25, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-0.70, -0.5, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-0.65, -0.75, -5.0), 0.25, leaf));
    r.setScene(Cube(make_tuple(-0.60, -1.0, -5.0), 0.25, leaf));

    //Letter A(2)
    //Left
    r.setScene(Cube(make_tuple(-0.30, -1.0, -5.0), 0.25, nose));
    r.setScene(Cube(make_tuple(-0.25, -0.75, -5.0),0.25, nose));
    r.setScene(Cube(make_tuple(-0.20, -0.50, -5.0), 0.25, nose));
    r.setScene(Cube(make_tuple(-0.15, -0.25, -5.0), 0.25, nose));
    r.setScene(Cube(make_tuple(-0.10, 0.0, -5.0), 0.25, nose));
    r.setScene(Cube(make_tuple(-0.00, 0.25, -5.0), 0.25, nose));

    //Center
    r.setScene(Cube(make_tuple(-0.05, -0.50, -5.0), 0.25, nose));
    r.setScene(Cube(make_tuple(0.20, -0.50, -5.0), 0.25, nose));
    r.setScene(Cube(make_tuple(0.45, -0.50, -5.0), 0.25, nose));

    //Top
    r.setScene(Cube(make_tuple(0.25, 0.25, -5.0), 0.25, nose));
    r.setScene(Cube(make_tuple(0.50, 0.25, -5.0), 0.25, nose));

    //Right
    r.setScene(Cube(make_tuple(0.60, 0.0, -5.0),0.25, nose));
    r.setScene(Cube(make_tuple(0.55, -0.25, -5.0), 0.25, nose));
    r.setScene(Cube(make_tuple(0.50, -0.5, -5.0), 0.25, nose));
    r.setScene(Cube(make_tuple(0.45, -0.75, -5.0), 0.25, nose));
    r.setScene(Cube(make_tuple(0.40, -1.0, -5.0), 0.25, nose));

    //Letter D
    //Left
    r.setScene(Cube(make_tuple(0.90, -1.0, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(0.90, -0.75, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(0.90, -0.50, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(0.90, -0.25, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(0.90, -0.0, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(0.90,  0.25, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(1.15,  0.25, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(1.40,  0.15, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(1.65,  0.05, -5.0), 0.25, antennae));


    //Right
    r.setScene(Cube(make_tuple(1.65, -0.20, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(1.65, -0.30, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(1.65, -0.55, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(1.65, -0.7, -5.0), 0.25, antennae));


    r.setScene(Cube(make_tuple(1.65, -0.8, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(1.40, -0.9, -5.0), 0.25, antennae));
    r.setScene(Cube(make_tuple(1.15, -1.0, -5.0), 0.25, antennae));

    //Letter O
    //Left
//    r.setScene(Cube(make_tuple(1.95, -1.0, -5.0), 0.25, eye));
    r.setScene(Cube(make_tuple(1.95, -0.75, -5.0), 0.25, eye));
    r.setScene(Cube(make_tuple(1.95, -0.50, -5.0), 0.25, eye));
    r.setScene(Cube(make_tuple(1.95, -0.25, -5.0), 0.25, eye));
    r.setScene(Cube(make_tuple(1.95,   0.0, -5.0), 0.25, eye));

    //Top
    r.setScene(Cube(make_tuple(2.20,   0.25, -5.0), 0.25, eye));
    r.setScene(Cube(make_tuple(2.45,   0.25, -5.0), 0.25, eye));
    r.setScene(Cube(make_tuple(2.70,   0.25, -5.0), 0.25, eye));

    //Bot
    r.setScene(Cube(make_tuple(2.20, -1.0, -5.0), 0.25, eye));
    r.setScene(Cube(make_tuple(2.45, -1.0, -5.0), 0.25, eye));
    r.setScene(Cube(make_tuple(2.70, -1.0, -5.0), 0.25, eye));

    //Right
//    r.setScene(Cube(make_tuple(2.95, -1.0, -5.0), 0.25,  eye));
    r.setScene(Cube(make_tuple(2.95, -0.75, -5.0), 0.25, eye));
    r.setScene(Cube(make_tuple(2.95, -0.50, -5.0), 0.25, eye));
    r.setScene(Cube(make_tuple(2.95, -0.25, -5.0), 0.25, eye));
    r.setScene(Cube(make_tuple(2.95,   0.0, -5.0), 0.25, eye));

    r.render();
    r.glFinish("proyecto.bmp");
    return 0;
}

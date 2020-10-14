#include <iostream>
#include "Raytracer.h"
#include "Materials.h"
#include "Plane.h"
#include "Texture.h"
int main()
{
    Raytracer r;
    r.glCreateWindow(1920, 1080);
    r.glClearColor(50.0, 50.0, 200.0);

    Texture texture("sun.bmp");
    texture.readBackground();

    Materials leaf({110.0, 150.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials eye({0.0, 0.0, 0.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials nose({255, 50.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials antennae({50.0, 50.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    r.setLight(Light(make_tuple(0.5, 2.0, 1.0), 1.0));
    r.type = 1;

    r.setCurrentTexture(texture);
    r.setScene(Sphere(make_tuple(6.0, 3.0, -10.0), 1.0, leaf), 0.0);
    r.render();

    r.glFinish("project.bmp");
    return 0;
}

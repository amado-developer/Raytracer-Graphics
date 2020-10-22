#include <iostream>
#include "Raytracer.h"
#include "Materials.h"
#include "Plane.h"
#include "Texture.h"
#include "Cube.h";
#include "Triangle.h"
#include <chrono>
int main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    Raytracer r;
    r.glCreateWindow(800, 600);
    r.glClearColor(50.0, 50.0, 200.0);

    Texture sunTexture("sun.bmp");
    sunTexture.readBackground();

    Materials leaf({110.0, 150.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials eye({150.0, 100.0, 200.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials nose({255, 50.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials antennae({50.0, 50.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials blackEye({0.0, 0.0, 0.0}, {0.0, 0.1, 0.0, 0.0}, 50.0);
    Materials whiteEye({255.0, 255.0, 255.0}, {1.0, 0.0, 0.0, 0.0}, 50.0);
    Materials pig({253.0, 215.0, 228.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials pigMouth({247.0, 225.0, 232.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials wool({230.0, 230.0, 230.0}, {1.0, 0.0, 0.0, 0.0}, 2.0);
    Materials brownWool({136.0, 125.0, 113.0}, {1.0, 0.0, 0.0, 0.0}, 2.0);

    r.setLight(Light(make_tuple(0.5, 2.0, 1.0), 1.0));
    r.type = 1;
    r.setCurrentTexture(sunTexture);
//    r.setScene(Sphere(make_tuple(4.0, 4.0, -15.0), 1.0), 0.0);
//    r.setScene(Plane(make_tuple(0.0, -1.0, -10.0), make_tuple(0.0, 1.0, 0.1), leaf));

    //Pig
    //Head
    r.setScene(Cube(make_tuple(-2.2, -0.1666666, -3.85), 0.5, pig));

    //Mouth
    r.setScene(Cube(make_tuple(-2.2, -0.26666, -3.55), 0.1666666, pigMouth));

    //Body
    r.setScene(Cube(make_tuple(-2.2, -0.666666, -4.5), 0.5, pig));
    r.setScene(Cube(make_tuple(-2.2, -0.666666, -4.0), 0.5, pig));

    //Legs
    //Left Leg
    r.setScene(Cube(make_tuple(-2.38, -0.95, -3.85), 0.1666666, pig));
    r.setScene(Cube(make_tuple(-2.38, -1.1, -3.85), 0.1666666, pig));

    //Right Leg
    r.setScene(Cube(make_tuple(-2.040, -0.95, -3.85), 0.1666666, pig));
    r.setScene(Cube(make_tuple(-2.040, -1.1, -3.85), 0.1666666, pig));

    //Right Back Leg
    r.setScene(Cube(make_tuple(-2.040, -0.95, -4.70), 0.1666666, pig));
    r.setScene(Cube(make_tuple(-2.040, -1.1, -4.70), 0.1666666, pig));

    //Eyes
    //Left eye
    r.setScene(Cube(make_tuple(-2.4, -0.066666, -3.6), 0.0625, blackEye));
    r.setScene(Cube(make_tuple(-2.3375,-0.066666, -3.6), 0.0625, whiteEye));

    //Right eye
    r.setScene(Cube(make_tuple(-1.99, -0.066666, -3.6), 0.0625, blackEye));
    r.setScene(Cube(make_tuple(-2.0525,  -0.066666, -3.6), 0.0625, whiteEye));

    //====================================Sheep========================================================
    //Head
    r.setScene(Cube(make_tuple(0.0, -0.1666666, -3.85), 0.5, wool));
//
    //Mouth
    r.setScene(Cube(make_tuple(0.0, -0.26666, -3.55), 0.1666666, pigMouth));

    //Body
    r.setScene(Cube(make_tuple(0.0, -0.666666, -4.0), 0.5, wool));

    //Legs
    //Left Leg
    r.setScene(Cube(make_tuple(-0.168, -0.95, -3.85), 0.1666666, pig));
    r.setScene(Cube(make_tuple(-0.168, -1.1, -3.85), 0.1666666, brownWool));

//    Right Leg
    r.setScene(Cube(make_tuple(0.168, -0.95, -3.85), 0.1666666, pig));
    r.setScene(Cube(make_tuple(0.168, -1.1, -3.85), 0.1666666, brownWool));

    //Eyes
    //Left eye
    r.setScene(Cube(make_tuple(-0.2, -0.066666, -3.6), 0.0625, blackEye));
    r.setScene(Cube(make_tuple(-0.1375,-0.066666, -3.6), 0.0625, whiteEye));

    //Right eye
    r.setScene(Cube(make_tuple(0.21, -0.066666, -3.6), 0.0625, blackEye));
    r.setScene(Cube(make_tuple(0.1475,  -0.066666, -3.6), 0.0625, whiteEye));

//    //Letter A
//    //Left
//    r.setScene(Cube(make_tuple(-3.0, -1.0, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.95, -0.75, -5.0),0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.90, -0.50, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.85, -0.25, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.80, 0.0, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.70, 0.25, -5.0), 0.25, leaf));
//
//    //Center
//    r.setScene(Cube(make_tuple(-2.55, -0.50, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.65, -0.50, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.45, -0.50, -5.0), 0.25, leaf));
//
//    //Top
//    r.setScene(Cube(make_tuple(-2.60, 0.25, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.50, 0.25, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.40, 0.25, -5.0), 0.25, leaf));
//
//    //Right
//    r.setScene(Cube(make_tuple(-2.40, 0.0, -5.0),0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.35, -0.25, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.30, -0.5, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.25, -0.75, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-2.20, -1.0, -5.0), 0.25, leaf));
//
//    //Letter M
//    //Left
//    r.setScene(Cube(make_tuple(-1.9, -1.0, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-1.85, -0.75, -5.0),0.25, leaf));
//    r.setScene(Cube(make_tuple(-1.80, -0.50, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-1.75, -0.25, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-1.70, 0.0, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-1.60, 0.25, -5.0), 0.25, leaf));
//
//    //Center
//    r.setScene(Cube(make_tuple(-1.445, 0.0, -5.0),0.25, leaf));
//    r.setScene(Cube(make_tuple(-1.05, 0.0, -5.0),0.25, leaf));
//    r.setScene(Cube(make_tuple(-1.25, -0.25, -5.0),0.25, leaf));
//
//    //Right
//    r.setScene(Cube(make_tuple(-0.85, 0.25, -5.0),0.25, leaf));
//    r.setScene(Cube(make_tuple(-0.80, 0.0, -5.0),0.25, leaf));
//    r.setScene(Cube(make_tuple(-0.75, -0.25, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-0.70, -0.5, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-0.65, -0.75, -5.0), 0.25, leaf));
//    r.setScene(Cube(make_tuple(-0.60, -1.0, -5.0), 0.25, leaf));
//
//    //Letter A(2)
//    //Left
//    r.setScene(Cube(make_tuple(-0.30, -1.0, -5.0), 0.25, nose));
//    r.setScene(Cube(make_tuple(-0.25, -0.75, -5.0),0.25, nose));
//    r.setScene(Cube(make_tuple(-0.20, -0.50, -5.0), 0.25, nose));
//    r.setScene(Cube(make_tuple(-0.15, -0.25, -5.0), 0.25, nose));
//    r.setScene(Cube(make_tuple(-0.10, 0.0, -5.0), 0.25, nose));
//    r.setScene(Cube(make_tuple(-0.00, 0.25, -5.0), 0.25, nose));
//
//    //Center
//    r.setScene(Cube(make_tuple(-0.05, -0.50, -5.0), 0.25, nose));
//    r.setScene(Cube(make_tuple(0.20, -0.50, -5.0), 0.25, nose));
//    r.setScene(Cube(make_tuple(0.45, -0.50, -5.0), 0.25, nose));
//
//    //Top
//    r.setScene(Cube(make_tuple(0.25, 0.25, -5.0), 0.25, nose));
//    r.setScene(Cube(make_tuple(0.50, 0.25, -5.0), 0.25, nose));
//
//    //Right
//    r.setScene(Cube(make_tuple(0.60, 0.0, -5.0),0.25, nose));
//    r.setScene(Cube(make_tuple(0.55, -0.25, -5.0), 0.25, nose));
//    r.setScene(Cube(make_tuple(0.50, -0.5, -5.0), 0.25, nose));
//    r.setScene(Cube(make_tuple(0.45, -0.75, -5.0), 0.25, nose));
//    r.setScene(Cube(make_tuple(0.40, -1.0, -5.0), 0.25, nose));
//
//    //Letter D
//    //Left
//    r.setScene(Cube(make_tuple(0.90, -1.0, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(0.90, -0.75, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(0.90, -0.50, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(0.90, -0.25, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(0.90, -0.0, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(0.90,  0.25, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(1.15,  0.25, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(1.40,  0.15, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(1.65,  0.05, -5.0), 0.25, antennae));
//
//
//    //Right
//    r.setScene(Cube(make_tuple(1.65, -0.20, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(1.65, -0.30, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(1.65, -0.55, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(1.65, -0.7, -5.0), 0.25, antennae));
//
//
//    r.setScene(Cube(make_tuple(1.65, -0.8, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(1.40, -0.9, -5.0), 0.25, antennae));
//    r.setScene(Cube(make_tuple(1.15, -1.0, -5.0), 0.25, antennae));
//
//    //Letter O
//    //Left
////    r.setScene(Cube(make_tuple(1.95, -1.0, -5.0), 0.25, eye));
//    r.setScene(Cube(make_tuple(1.95, -0.75, -5.0), 0.25, eye));
//    r.setScene(Cube(make_tuple(1.95, -0.50, -5.0), 0.25, eye));
//    r.setScene(Cube(make_tuple(1.95, -0.25, -5.0), 0.25, eye));
//    r.setScene(Cube(make_tuple(1.95,   0.0, -5.0), 0.25, eye));
//
//    //Top
//    r.setScene(Cube(make_tuple(2.20,   0.25, -5.0), 0.25, eye));
//    r.setScene(Cube(make_tuple(2.45,   0.25, -5.0), 0.25, eye));
//    r.setScene(Cube(make_tuple(2.70,   0.25, -5.0), 0.25, eye));
//
//    //Bot
//    r.setScene(Cube(make_tuple(2.20, -1.0, -5.0), 0.25, eye));
//    r.setScene(Cube(make_tuple(2.45, -1.0, -5.0), 0.25, eye));
//    r.setScene(Cube(make_tuple(2.70, -1.0, -5.0), 0.25, eye));
//
//    //Right
////    r.setScene(Cube(make_tuple(2.95, -1.0, -5.0), 0.25,  eye));
//    r.setScene(Cube(make_tuple(2.95, -0.75, -5.0), 0.25, eye));
//    r.setScene(Cube(make_tuple(2.95, -0.50, -5.0), 0.25, eye));
//    r.setScene(Cube(make_tuple(2.95, -0.25, -5.0), 0.25, eye));
//    r.setScene(Cube(make_tuple(2.95,   0.0, -5.0), 0.25, eye));

    r.render();
    r.glFinish("proyecto.bmp");

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    printf("Time measured: %.3f Minutes.\n", (elapsed.count() * 1e-9) / 60);
    printf("Time measured: %.3f Seconds.\n", (elapsed.count() * 1e-9));
    return 0;
}

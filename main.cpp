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

    Texture background("back.bmp");
    background.readBackground();
    r.framebuffer = background.backgroundCharPixels;

    Texture sunTexture("sun.bmp");
    sunTexture.readBackground();

    Texture waterTexture("water.bmp");
    waterTexture.readBackground();

    Texture airTexture("air.bmp");
    airTexture.readBackground();

    Texture snowTexture("snow.bmp");
    snowTexture.readBackground();

    Texture dirtTexture("dirt.bmp");
    dirtTexture.readBackground();

    Materials leaf({110.0, 150.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials purpleWool({150.0, 100.0, 200.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials redStone({255, 50.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials grayWool({50.0, 50.0, 50.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials blackEye({0.0, 0.0, 0.0}, {0.0, 0.1, 0.0, 0.0}, 50.0);
    Materials whiteEye({255.0, 255.0, 255.0}, {1.0, 0.0, 0.0, 0.0}, 50.0);
    Materials pig({253.0, 215.0, 228.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials pigMouth({247.0, 225.0, 232.0}, {0.9, 0.1, 0.0, 0.0}, 11.0);
    Materials wool({230.0, 230.0, 230.0}, {1.0, 0.0, 0.0, 0.0}, 2.0);
    Materials lapisLazuli({38.0, 97.0, 156.0}, {1.0, 0.0, 0.0, 0.0}, 2.0);
    Materials brownWool({136.0, 125.0, 113.0}, {1.0, 0.0, 0.0, 0.0}, 2.0);
    Materials water({0.5, 119.0, 190.0}, {0.7, 0.0, 0.3, 0.0}, 1425.0);
    Materials gold({245.0, 201.0, 57.0}, {0.7, 0.1, 0.1, 0.1}, 125.0);
    Materials creeper1({143.0,227.0,143.0}, {0.7, 0.1, 0.1, 0.1}, 2.0);

    Materials sunText({}, {}, 0.0);
    sunText.textIndex = 0;
    sunText.isTexture = true;

    Materials waterText({}, {}, 0.0);
    waterText.textIndex = 1;
    waterText.isTexture = true;

    Materials snow({}, {}, 0.0);
    snow.textIndex = 2;
    snow.isTexture = true;

    Materials air({}, {}, 0.0);
    air.textIndex = 3;
    air.isTexture = true;

    Materials dirt({}, {}, 0.0);
    dirt.textIndex = 4;
    dirt.isTexture = true;

    //Materials creeper2({15.0,128.0,15.0}, {0.5, 0.5, 0.0, 0.0}, 2.0);
    //Materials creeper3({13.0,181.0,13.0}, {0.5, 0.5, 0.0, 0.0}, 2.0);
    //Materials creeper4({96.0,158.0,96.0}, {0.5, 0.5, 0.0, 0.0}, 2.0);
    //Materials creeper5({0.0,69.0,0.0}, {0.5, 0.5, 0.0, 0.0}, 2.0);

    r.setLight(Light(make_tuple(0.5, 2.0, 1.0), 1.0));
    r.type = 1;

    r.setCurrentTexture(sunTexture);
    r.setScene(Sphere(make_tuple(6.0, 4.0, -15.0), 1.0, sunText), 0.0);

    r.setCurrentTexture(waterTexture);
    r.setScene(Sphere(make_tuple(9.0, 4.0, -15.0), 1.0, waterText), 0.0);

    r.setCurrentTexture(snowTexture);
    r.setScene(Sphere(make_tuple(-3.0, 4.0, -15.0), 1.0, snow), 0.0);

    r.setCurrentTexture(airTexture);
    r.setScene(Sphere(make_tuple(3.0, 4.0, -15.0), 1.0, air), 0.0);

    r.setCurrentTexture(dirtTexture);
    r.setScene(Sphere(make_tuple(-0.0, 4.0, -15.0), 1.0, dirt), 0.0);

    //==========================================Bubble/Reflection=====================================================
    r.setScene(Sphere(make_tuple(-3.0, 1.8, -5.8),0.5, water), 1.0);

    //==========================================Gold / Refraction =================================================================
    r.setScene(Sphere(make_tuple(-1.0, -1.0, -4.0), 0.5, gold), 1.5);


    //=========================================Pig==================================================================
    //Head
    r.setScene(Cube(make_tuple(-2.2, -1.1666666, -3.85), 0.5, pig));

    //Mouth
    r.setScene(Cube(make_tuple(-2.2, -1.26666, -3.55), 0.1666666, pigMouth));

    //Body
    r.setScene(Cube(make_tuple(-2.2, -1.666666, -4.5), 0.5, pig));
    r.setScene(Cube(make_tuple(-2.2, -1.666666, -4.0), 0.5, pig));

    //Legs
    //Left Leg
    r.setScene(Cube(make_tuple(-2.38, -1.95, -3.85), 0.1666666, pig));
    r.setScene(Cube(make_tuple(-2.38, -2.1, -3.85), 0.1666666, pig));

    //Right Leg
    r.setScene(Cube(make_tuple(-2.040, -1.95, -3.85), 0.1666666, pig));
    r.setScene(Cube(make_tuple(-2.040, -2.1, -3.85), 0.1666666, pig));

    //Right Back Leg
    r.setScene(Cube(make_tuple(-2.040, -1.95, -4.70), 0.1666666, pig));
    r.setScene(Cube(make_tuple(-2.040, -2.1, -4.70), 0.1666666, pig));

    //Eyes
    //Left eye
    r.setScene(Cube(make_tuple(-2.4, -1.066666, -3.6), 0.0625, blackEye));
    r.setScene(Cube(make_tuple(-2.3375,-1.066666, -3.6), 0.0625, whiteEye));

    //Right eye
    r.setScene(Cube(make_tuple(-1.99, -1.066666, -3.6), 0.0625, blackEye));
    r.setScene(Cube(make_tuple(-2.0525,  -1.066666, -3.6), 0.0625, whiteEye));

    //====================================Sheep========================================================
    //Head
    r.setScene(Cube(make_tuple(0.0, -1.1666666, -4.35), 0.5, wool));

    //Face
    r.setScene(Cube(make_tuple(-0.11, -1.15, -4.15), 0.25, brownWool));
    r.setScene(Cube(make_tuple(0.11, -1.15, -4.15), 0.25, brownWool));
    r.setScene(Cube(make_tuple(0.0, -1.265, -4.15), 0.25, brownWool));
    //Mouth
    r.setScene(Cube(make_tuple(0.0, -1.31, -4.00), 0.1666666, pigMouth));

    //Body
    r.setScene(Cube(make_tuple(0.0, -1.666666, -4.4), 0.5, wool));

    //Legs
    //Left Leg
    r.setScene(Cube(make_tuple(-0.168, -1.95, -4.35), 0.1666666, pig));
    r.setScene(Cube(make_tuple(-0.168, -2.1, -4.35), 0.1666666, brownWool));

    //Right Leg
    r.setScene(Cube(make_tuple(0.168, -1.95, -4.35), 0.1666666, pig));
    r.setScene(Cube(make_tuple(0.168, -2.1, -4.35), 0.1666666, brownWool));

    //Eyes
    //Left eye
    r.setScene(Cube(make_tuple(-0.19, -1.066666, -3.75), 0.0625, blackEye));
    r.setScene(Cube(make_tuple(-0.1275,-1.066666, -3.75), 0.0625, whiteEye));

    //Right eye
    r.setScene(Cube(make_tuple(0.19, -1.066666, -3.75), 0.0625, blackEye));
    r.setScene(Cube(make_tuple(0.1275,  -1.066666, -3.75), 0.0625, whiteEye));

    //======================================Creeper=============================================================
    //Head
    r.setScene(Cube(make_tuple(1.8, -1.766666, -4.55), 1.0, creeper1));

    //Face
    //Eyes
    r.setScene(Cube(make_tuple(1.6, -1.605, -4.14), 0.20, blackEye));
    r.setScene(Cube(make_tuple(2.0, -1.605, -4.14), 0.20, blackEye));
    r.setScene(Cube(make_tuple(1.8, -1.81, -4.14), 0.20, blackEye));

    //Mouth?
    r.setScene(Cube(make_tuple(1.8, -1.91, -4.14), 0.20, blackEye));

    //left Mouth?
    r.setScene(Cube(make_tuple(1.645, -1.859, -4.09), 0.1, blackEye));
    r.setScene(Cube(make_tuple(1.645, -1.959, -4.09), 0.1, blackEye));
    r.setScene(Cube(make_tuple(1.645, -2.059, -4.09), 0.1, blackEye));

    //Right Mouth?
    r.setScene(Cube(make_tuple(1.95, -1.859, -4.095), 0.1, blackEye));
    r.setScene(Cube(make_tuple(1.95, -1.959, -4.095), 0.1, blackEye));
    r.setScene(Cube(make_tuple(1.95, -2.059, -4.095), 0.1, blackEye));

    //==================================Letter A================================================================
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
    r.setScene(Cube(make_tuple(-1.9, -1.0, -5.0), 0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-1.85, -0.75, -5.0),0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-1.80, -0.50, -5.0), 0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-1.75, -0.25, -5.0), 0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-1.70, 0.0, -5.0), 0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-1.60, 0.25, -5.0), 0.25, lapisLazuli));

    //Center
    r.setScene(Cube(make_tuple(-1.445, 0.0, -5.0),0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-1.05, 0.0, -5.0),0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-1.25, -0.25, -5.0),0.25, lapisLazuli));

    //Right
    r.setScene(Cube(make_tuple(-0.85, 0.25, -5.0),0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-0.80, 0.0, -5.0),0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-0.75, -0.25, -5.0), 0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-0.70, -0.5, -5.0), 0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-0.65, -0.75, -5.0), 0.25, lapisLazuli));
    r.setScene(Cube(make_tuple(-0.60, -1.0, -5.0), 0.25, lapisLazuli));

    //Letter A(2)
    //Left
    r.setScene(Cube(make_tuple(-0.30, -1.0, -5.0), 0.25, redStone));
    r.setScene(Cube(make_tuple(-0.25, -0.75, -5.0),0.25, redStone));
    r.setScene(Cube(make_tuple(-0.20, -0.50, -5.0), 0.25, redStone));
    r.setScene(Cube(make_tuple(-0.15, -0.25, -5.0), 0.25, redStone));
    r.setScene(Cube(make_tuple(-0.10, 0.0, -5.0), 0.25, redStone));
    r.setScene(Cube(make_tuple(-0.00, 0.25, -5.0), 0.25, redStone));

    //Center
    r.setScene(Cube(make_tuple(-0.05, -0.50, -5.0), 0.25, redStone));
    r.setScene(Cube(make_tuple(0.20, -0.50, -5.0), 0.25, redStone));
    r.setScene(Cube(make_tuple(0.45, -0.50, -5.0), 0.25, redStone));

    //Top
    r.setScene(Cube(make_tuple(0.25, 0.25, -5.0), 0.25, redStone));
    r.setScene(Cube(make_tuple(0.50, 0.25, -5.0), 0.25, redStone));

    //Right
    r.setScene(Cube(make_tuple(0.60, 0.0, -5.0),0.25, redStone));
    r.setScene(Cube(make_tuple(0.55, -0.25, -5.0), 0.25, redStone));
    r.setScene(Cube(make_tuple(0.50, -0.5, -5.0), 0.25, redStone));
    r.setScene(Cube(make_tuple(0.45, -0.75, -5.0), 0.25, redStone));
    r.setScene(Cube(make_tuple(0.40, -1.0, -5.0), 0.25, redStone));

    //Letter D
    //Left
    r.setScene(Cube(make_tuple(0.90, -1.0, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(0.90, -0.75, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(0.90, -0.50, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(0.90, -0.25, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(0.90, -0.0, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(0.90,  0.25, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(1.15,  0.25, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(1.40,  0.15, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(1.65,  0.05, -5.0), 0.25, grayWool));

    //Right
    r.setScene(Cube(make_tuple(1.65, -0.20, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(1.65, -0.30, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(1.65, -0.55, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(1.65, -0.7, -5.0), 0.25, grayWool));

    r.setScene(Cube(make_tuple(1.65, -0.8, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(1.40, -0.9, -5.0), 0.25, grayWool));
    r.setScene(Cube(make_tuple(1.15, -1.0, -5.0), 0.25, grayWool));

    //Letter O
    //Left
//    r.setScene(Cube(make_tuple(1.95, -1.0, -5.0), 0.25, purpleWool));
    r.setScene(Cube(make_tuple(1.95, -0.75, -5.0), 0.25, purpleWool));
    r.setScene(Cube(make_tuple(1.95, -0.50, -5.0), 0.25, purpleWool));
    r.setScene(Cube(make_tuple(1.95, -0.25, -5.0), 0.25, purpleWool));
    r.setScene(Cube(make_tuple(1.95,   0.0, -5.0), 0.25, purpleWool));

    //Top
    r.setScene(Cube(make_tuple(2.20,   0.25, -5.0), 0.25, purpleWool));
    r.setScene(Cube(make_tuple(2.45,   0.25, -5.0), 0.25, purpleWool));
    r.setScene(Cube(make_tuple(2.70,   0.25, -5.0), 0.25, purpleWool));

    //Bot
    r.setScene(Cube(make_tuple(2.20, -1.0, -5.0), 0.25, purpleWool));
    r.setScene(Cube(make_tuple(2.45, -1.0, -5.0), 0.25, purpleWool));
    r.setScene(Cube(make_tuple(2.70, -1.0, -5.0), 0.25, purpleWool));

    //Right
//    r.setScene(Cube(make_tuple(2.95, -1.0, -5.0), 0.25,  purpleWool));
    r.setScene(Cube(make_tuple(2.95, -0.75, -5.0), 0.25, purpleWool));
    r.setScene(Cube(make_tuple(2.95, -0.50, -5.0), 0.25, purpleWool));
    r.setScene(Cube(make_tuple(2.95, -0.25, -5.0), 0.25, purpleWool));
    r.setScene(Cube(make_tuple(2.95,   0.0, -5.0), 0.25, purpleWool));

    r.render();
    r.glFinish("proyecto.bmp");

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    printf("Time measured: %.3f Minutes.\n", (elapsed.count() * 1e-9) / 60);
    printf("Time measured: %.3f Seconds.\n", (elapsed.count() * 1e-9));
    return 0;
}

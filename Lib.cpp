//
// Created by Amado Garcia on 9/7/20.
//

#include "Lib.h"
#include <math.h>
#include <vector>

//MATH SECTION
/***********************************************************************
 * All these Math operations were provided by Denn1s (Github) in class
 * *********************************************************************/
tuple<double, double, double> Lib::sum(tuple<double, double, double> v0, tuple<double, double, double> v1)
{
    return make_tuple((get<0>(v0) + get<0>(v1)), (get<1>(v0) + get<1>(v1)), (get<2>(v0) + get<2>(v1)));
}
tuple<double, double, double> Lib::sub(tuple<double, double, double> v0, tuple<double, double, double> v1)
{
    return make_tuple((get<0>(v0) - get<0>(v1)), (get<1>(v0) - get<1>(v1)), (get<2>(v0) - get<2>(v1)));
}
tuple<double, double, double> Lib:: mult(tuple<double, double, double> v0, double k){
    return make_tuple((get<0>(v0) * k), (get<1>(v0) * k), (get<2>(v0) * k));
}
double Lib:: dot(tuple<double, double, double> v0, tuple<double, double, double> v1)
{
    return get<0>(v0) * get<0>(v1) + get<1>(v0) * get<1>(v1) + get<2>(v0) * get<2>(v1);
}
double Lib:: length(tuple<double, double, double> v0)
{
    return pow((pow(get<0>(v0), 2) + pow(get<1>(v0), 2) + pow(get<2>(v0), 2)), 0.5);
}
tuple<double, double, double>Lib:: norm(tuple<double, double, double> v0)
{
    double v0Length = length(v0);

    if(v0Length == 0.0)
    {
        return make_tuple(0.0, 0.0, 0.0);
    }
    return make_tuple((get<0>(v0)/v0Length), (get<1>(v0)/v0Length), (get<2>(v0)/v0Length));
}
tuple<double, double, double> Lib::cross(tuple<double, double, double> v1, tuple<double, double, double> v2) {
    int v1X = get<0>(v1);
    int v1Y = get<1>(v1);
    int v1Z = get<2>(v1);

    int v2X = get<0>(v2);
    int v2Y = get<1>(v2);
    int v2Z = get<2>(v2);

    tuple<int, int, int> cross
            {
                    make_tuple
                            (
                                    v1Y * v2Z - v1Z * v2Y,
                                    v1Z * v2X - v1X * v2Z,
                                    v1X * v2Y - v1Y * v2X
                            )
            };
    return cross;
}
tuple<double, double, double> Lib::reflect(tuple<double, double, double> I, tuple<double, double, double> N)
{
    auto lm = mult(I, -1);
    auto n = mult(N, 2 * dot(lm, N));
    return norm(sub(lm, n));
}
tuple<double, double, double> Lib::refract(tuple<double, double, double> I, tuple<double, double, double> N,
                                           double refractiveIndex)
{
   double etai{1.0};
   double etat{refractiveIndex};

   double cosi{-dot(I,N)};

   if(cosi < 0.0)
   {
       cosi = -cosi;
       double tempEtai{etai};
       etai = etat;
       etat = tempEtai;
       N = mult(N, -1);
   }
   double eta{etai/etat};
   double k{1 - pow(eta, 2.0) * (1 - pow(cosi, 2.0))};

   if(k < 0.0)
       return make_tuple(0.0, 0.0, 0.0);
   double cost = pow(k, 0.5);

   return norm(sum(mult(I, eta), mult(N, (eta * cosi, - cost))));
}





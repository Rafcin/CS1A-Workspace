//
// Created by Rafael Szuminski on 10/28/19.
//

#include "dist.h"
#include <math.h>

double calcDist(double pointX1, double pointY1, double pointX2, double pointY2){
    return sqrt(pow(pointX2-pointX1,2)+pow(pointY2-pointY1,2));
}
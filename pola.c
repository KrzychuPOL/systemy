#include <stdio.h>
#include <stdlib.h>
#include "pola.h"

float pole_prostokata(float a, float b) {
    return (float) a*b;
}

float pole_prostopadloscianu(float a, float b, float H) {
    float pp = 2*pole_prostokata(a, b);
    float pb = 2*pole_prostokata(a, H) + 2*pole_prostokata(b, H);
    return pp+pb;
}

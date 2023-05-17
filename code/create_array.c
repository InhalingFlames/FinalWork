#ifndef Create_array_h
#define Create_array_h

#include "center.h"
#include <stdlib.h>

void create_array(int seed, int *pa, int w, int h) {

    srand(seed);
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            *pa = rand()%(200)-100;
            pa++;
        }
    }
}

#endif
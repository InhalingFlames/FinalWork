#ifndef Calculations_h
#define Calculations_h

#include "center.h"

void calculations(int *pa, int *pb, int *ans1, int *ans2, int k, int w, int ww, int h) {
        for (int i=0; i<w; i++) {
        if (i%2 == 0) {
            *ans1 += *pa;
        }
        else {
            *ans1 -= *pa;
        }
        pa++;  
    }

    for (int i=0; i<ww; i++) {
        for (int j=0; j<h; j++) {
            if ((i+j) == k) {
                *ans2 += *pb;
            }
            pb++;
        }
    } 
}

#endif
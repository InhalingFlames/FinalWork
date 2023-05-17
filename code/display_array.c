#ifndef Display_array_h
#define Display_array_h

#include "center.h"
#include <stdio.h>

void display_array(int *pa,int w, int h) {
    for (int i=0; i<h; i++) {
        printf("\nrow %d:", i+1);
        for (int j=0; j<w; j++) {
            printf("%d, ", *pa);
            pa++;
        }
    }
    printf("\n");
}

#endif
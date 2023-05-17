#include "center.h"

//#include "create_array.h"
//#include "display_array.c"
//#include "calculations.c"
//#include "output.c"

void main() {
    int glock = 0;
    int rari = 0; 
    int k = 3; /* Переменная, которой должна быть равна сумма индексов матрицы k == i+j */
    int array1[20]; // одномерный массив или матрица-строка
    int array2[6][8]; // двумерный массив
    create_array(11, &array1[0], 20, 1);
    create_array(11, (int *)array2, 6, 8);
    display_array(&array1[0], 20, 1);
    display_array((int *)array2, 6, 8);
    calculations(&array1[0], (int *)array2, &glock, &rari, k, 20, 6, 8);
    output(glock, rari);
}

// include.h - wha.. do i like create header file with name 'include' lol. Well now in the file with main func there is only
// one header file. Is it right?

// include guard - done, well i couldn't mess up, this is just pasting 3 lines of the same code

// center.c - include center.h - what are this and all of the above even mean??? now there is one header, which includes many
// other header files with functions expressions. I bet this is the wrong way.

// global NO - idk, i just moved var declaration to main() is this it?

// 6 8 20 - kinda done

// :)
// program to print text gradually, over time, like a runiing string.
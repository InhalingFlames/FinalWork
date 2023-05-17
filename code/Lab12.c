#include "center.h"

//#include "create_array.h"
//#include "display_array.c"
//#include "calculations.c"
//#include "output.c"

void main() {
    int ans1 = 0, ans2 = 0, k = 3, array1[20], array2[6][8];
    create_array(11, &array1[0], 20, 1);
    create_array(11, (int *)array2, 6, 8);
    display_array(&array1[0], 20, 1);
    display_array((int *)array2, 6, 8);
    calculations(&array1[0], (int *)array2, &ans1, &ans2, k, 20, 6, 8);
    output(ans1, ans2);
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
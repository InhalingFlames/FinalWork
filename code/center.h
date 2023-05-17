#include "create_array.c"
#include "calculations.c"
#include "display_array.c"
#include "output.c"

void create_array(int seed, int *pa, int w, int h);
void display_array(int *pa,int w, int h);
void calculations(int *pa, int *pb, int *ans1, int *ans2, int k, int w, int w2, int h);
void output(int ans1, int ans2);
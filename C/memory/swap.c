#include <stdio.h>

void swap(int *a, int *b); // include prototype
int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y); // function swap
    printf("x is %i, x is %i\n", x, y);
}

// memory is structured in this way:

// machine code
// globals  
// garbage tmp(a) / when main runs again, all variables in heap are garbage so it all stays the same
// heap <- malloc here (local variable, parameters) / stack / swap() goes here / size4 int (a) size 4 int(b) stored / 
// main() here is in the bottom // variables x(1) and y(2)

void swap(int *a, int *b)
{   
    /*
    int tmp = a;
    a = b; this allocate new copies of variables but don't change anything in main
    b = tmp;
    */

   int tmp = *a;
   *a = *b;
   *b = tmp;
}
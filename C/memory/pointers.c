#include <stdio.h>

int main(void)
{
    int n = 50; //4 bytes
    int *p = &n; // pointer, which takes 8 bytes and points at the location of n
    printf("%p\n", p); // 
} 
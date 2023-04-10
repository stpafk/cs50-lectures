#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    /*
    int i = get_int("i: ");
    int j = get_int("j: ");

    if (i == j)
    {
        printf("Same name\n");
    }
    else 
    {
        printf("Different\n");
    }
    */
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    printf("%p\n", s);
    printf("%p\n", t); // prints where it is in the memory 

    //if (s == t)
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else 
    {
        printf("Different\n"); // with (s == t) it will always return "Different"
    }
}
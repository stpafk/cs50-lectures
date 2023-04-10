#include <stdio.h>
#include <cs50.h>

/*
int main(void)
{
    string s = "HI!";
    printf("%p\n", s[0]); // points to first adress of memory
}
*/

int main(void) 
{
    char *s = "HI!";
    printf("%c\n", *s); // pointers gets the first index because of it's relations
    printf("%c\n", *(s+1)); // get address + 1
    printf("%c\n", *(s+2));
    //printf("%c\n", *(s+100000)) returns "segmentation fault", which means there is something wrong with the memory allocation
    
}
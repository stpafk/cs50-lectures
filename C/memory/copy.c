#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("S: ");
    //char *t = s; // this copies the address
    char *t = malloc(strlen(s) + 1); // (s) + 1 has to be done this way to copy the end of the string
    // when having a big chunk of memory in your code it is best-practice to check if the memory exists
    // also, you need to return this memory when you manage it correctly using free function
    if (t == NULL) 
    {
        return 1;
    }
    /*
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
        //or *(t+i) = *(s+1); 
    }
    */

    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);  
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}
#include <stdio.h>
#include <cs50.h>

int lenstr(string x);

int main(void)
{
    string s = get_string("Input: ");
    printf("Lenght of string: %i\n", lenstr(s)); 
}

int lenstr(string x)
{
    int length = 1;
    for (int i = 0; x[i] != '\0'; i++) //single quotes because it is a \0 is a char
    {
        length = length + i;
    }
    return length;
}
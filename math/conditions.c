#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int x = get_int("x: ");
  int y = get_int("y: ");
  
  if (x > y)
  {
    printf("x is bigger than y");
  }
  else if (x < y)
  {
    printf("y is bigger than x");
  }
  else 
  {
    printf("x and y are equal");
  }
}

#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int x = get_int("x: ");
  int y = get_int("y: ");
  
  if (x > y)
  {
    printf("x is bigger than y\n");
  }
  else if (x < y)
  {
    printf("y is bigger than x\n");
  }
  else 
  {
    printf("x and y are equal\n");
  }
}

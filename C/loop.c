#include <stdio.h>

int i = 0;

int main(void)
{
  while (i < 50)
  {
    printf("Hello World.\n");
    i++;
  }
}
//or 

int main_2(void)
{
  for (int i = 0; i < 50; i++)
  {
    printf("Hello World.\n");
  }
}

#include <stdio.h>
#include <cs50.h>

float average(int x, int array[]);
int TOTAL = 3;

int main(void)
{
    int scores[TOTAL];

    for (int i = 0; i < TOTAL; i++)
    {
        scores[i] = i;
    }

    printf("Average: %f\n", average(TOTAL, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }
    return sum / (float) length;
}
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

    int height = 0;
    do
    {
    height = get_int("Height: \n");
    }
    while(height < 0 || height > 23);



    for (int i = height; i > 0; i--)
    {
        for (int b = i - 1; b > 0 ; b--)

        {
            printf(" ");
        }

        for (int g = height - i; g >= 0; g--)
        {
        printf("#");


        }
        printf("  ");
        for (int g = height - i; g >= 0; g--)
        {
        printf("#");


        }

        printf("\n");
    }



}
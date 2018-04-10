#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    int height = strtol(argv[1], NULL, 10);
    //printf("%d", height);
    (void)argc;

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
// argc tells youhow many arguments,  argv is a list of strings that have the arguments in it.
//argv is a string, those imput swill not work as intended unless they wanted a string, otherwise they would need to convert it to what they want
//it maes things go faster.
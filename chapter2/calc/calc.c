#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, string argv[])
{
    if (argc != 4)
    {
        return 1;
    }

    float numb1 = atof(argv[1]);
    float numb2 = atof(argv[3]);

    if (strcmp(argv[2], "+") == 0)
    {
        float i = numb1 + numb2;
        printf("%f\n", i);
    }
    else if (strcmp(argv[2], "-") == 0)
    {
        float i = numb1 - numb2;
        printf("%f\n", i);
    }
    else if (strcmp(argv[2], "x") == 0)
    {
        float i = numb1 * numb2;
        printf("%f\n", i);
    }
    else if (strcmp(argv[2], "/") == 0)
    {
        float i = numb1 / numb2;
        printf("%f\n", i);
    }
    else if (strcmp(argv[2], "%") == 0)
    {
        int q = numb1 / numb2;
        float mod = numb2 - (numb1 * q);
        printf("%f\n", mod);
    }
    else
    {
        return 1;
    }


}
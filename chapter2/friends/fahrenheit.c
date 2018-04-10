#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    else
    {
        float C = atof(argv[1]);
        float F = ((C * 9) / 5) + 32;
        printf("%.1f\n", F);
    }
}

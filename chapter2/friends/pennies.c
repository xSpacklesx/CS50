#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
    if (argc != 3)
    {
        return 1;
    }
    int days = 0;
    int penn = 0;

    days = atoi(argv[1]);
    penn = atoi(argv[2]);


    while (  31 - days > 3  )
    {
        return 1;
    }
    while ( penn < 1 )
    {
        return 1;
    }

    long long calc1 = penn;

    for (int i = 1; i < days; i++  )
    {
        calc1 += penn * pow(2, i);
    }
    printf("$%.2f\n", calc1 / 100.0);
}
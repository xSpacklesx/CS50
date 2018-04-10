#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int days = 0;

    int penn = 0;

    days = get_int ("days in month\n");
    penn = get_int ("How many pennies on the first day\n");


    while (  31 - days > 3  )
    {
        days = get_int ("days in month \n");

    }

    while ( penn < 1 )
    {

        penn = get_int ("How many pennies on the first day: \n");
    }

    long long calc1 = penn;

    for (int i = 1; i < days; i++  )
    {
        calc1 += penn * pow(2, i);
    }


    printf("$%.2f\n", calc1 / 100.0);

}
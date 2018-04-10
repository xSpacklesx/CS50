#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{


    long long isbn = get_long_long ("ISBN: \n");

    int isbnArray[10];


    for (int i = 9; i >= 0; i--)
    {
        isbnArray[i] = isbn % 10;
        isbn /= 10;


    }
    int total = 0;

    for (int i = 0; i < 10; i ++)
    {

        total += (i + 1) * isbnArray[i];


    }

    if (0 == total % 11)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


}
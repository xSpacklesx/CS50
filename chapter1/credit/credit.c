#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{

long long cnumb = get_long_long("Number: \n");


    long long copy = cnumb;
    int total = 0;
    int count = 0;
    int multi = 0;
    int check = 0;
    long long ctype = 1;

    for (long long i = cnumb; i > 0; i /= 10)
    {
        count++;
        ctype = ctype * 10;
    }

    for
{
    total += copy % 10;
    copy = copy / 10;
    if ((copy % 10) * 2 >= 10)
        {
            multi += ((copy % 10) * 2) % 10;
            multi += ((copy % 10) * 2) / 10;
        }
        else
        {
            multi += (copy % 10) * 2;
        }

        copy = copy / 10;
    }
    check = total + multi;

    //printf("%lld", cnumb / (ctype / 100));


    if (0 != check % 10)
    {
        printf("INVALID\n");
    }
    else if ((cnumb / (ctype / 100)) == 34 || (cnumb / (ctype / 100) == 37))
    {
        printf("AMEX\n");
    }

    else if ((cnumb / (ctype / 10)) == 4)
    {
        printf("VISA\n");
    }


    else if ((cnumb / (ctype / 100)) >= 51 || (cnumb / (ctype / 100)) <= 55)
    {
        printf("MASTERCARD\n");
    }

}
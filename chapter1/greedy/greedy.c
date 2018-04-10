//This programm will convert dollare and cents into the least amount of coins that could be given out


#include <cs50.h>
#include <stdio.h>
#include <math.h>

# define QUARTER 25
# define DIME 10
# define NICKLE 5
# define PENNY 1

int main(void)
{
// defines user imput and the counter

    float change = 0.0;
    int cents = 0;
    int counter = 0;

    change = get_float ("O hai! How much change is owed?\n");

    while (change < 0)
    {
        change = get_float ("O hai! How much change is owed?\n");
    }

    cents = round(change * 100);
// checks quarters
    while ((cents - QUARTER) >= 0)
    {
        counter ++;

        cents = (cents - QUARTER);

    }
//checks dimes
    while ((cents - DIME) >= 0)
    {
        counter ++;

        cents = (cents - DIME);
    }
//checks nickles
    while ((cents - NICKLE) >= 0)
    {
        counter ++;

        cents = (cents - NICKLE);
    }
//checks pennies
    while ((cents - PENNY) >= 0)
    {
        counter ++;

        cents = (cents - PENNY);
    }

    //prints the final count of change
    printf("%d\n", counter);

}
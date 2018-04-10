/**
 * helpers.c
 *
 * CS50 AP
 * Find
 *
 * Helper functions.
 */

#include <cs50.h>
#include <stdio.h>
#include "helpers.h"
#define  MAX  65536
/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n < 0)
    {
        return false;
    }
    for (int i = 0; i < n; i++)
    {

        if (value == values[i])
        {
            return true;
        }
    }
//sorts the array
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    //
    int countArray[MAX] = {0};
    int c = 0;
    for (int i = 0; i <= n; i++)
    {
        countArray[values[i]]++;

    }
    //this checks through the array for the number of each number there is and sets them to where they need to be
    for (int i = 0; i < n; i++)
    {
        int boottoobig = countArray[i];

        for (int j = 1; j < boottoobig; j++)
        {
            values[c] = (countArray[i] * i);
            printf("%d ", values[c]);
            c++;
        }

    }
//should work, does in practice
//WTF
//I'm gonna cry





    return;
}

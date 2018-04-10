/**
 * helpers.c
 *
 * CS50 AP
 * Sort Race
 *
 * Helper functions for the sort race
 */

#include <cs50.h>
#include "helpers.h"
#include <string.h>
/**
 * Returns true if str is a valid flag (-a, -b, -r, or -s), false otherwise.
 */
bool check_flag(char *str)
{

    if (strcmp(str, "-a") == 0)
    {

        return true;
    }
    else if (strcmp(str, "-b") == 0)
    {
        return true;
    }
    else if (strcmp(str, "-r") == 0)
    {
        return true;
    }
    else if (strcmp(str, "-s") == 0)
    {
        return true;
    }
    return false;
}

/**
 * Sorts array of n values using bubble sort.
 */
void bubble(int values[], int n)
{

    bool swap = true;
    while (swap)
    {


        swap = false;
        for (int i = 0; i < n; i ++)
        {
            if (values[i] < values[i + 1])
            {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                swap = true;

            }
        }
    }
}
/**
 * Sorts array of n values using selection sort.
 */
void selection(int values[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < values[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = values[min];
            values[min] = values[i];
            values[i] = temp;
        }

    }


}

/**
 * Sorts array of n values using insertion sort.
 */
void insertion(int values[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        int element = 1;
        element = values[i];
        j = i;
        while (j > 0 && values[j - 1] > element)
        {
            values[j] = values[j - 1];
            j = j - 1;


        }
        values[j] = element;
    }
}

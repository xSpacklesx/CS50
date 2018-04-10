#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    bool check = true;

    string name = get_string();

    for (int i = 0; i < strlen(name); i ++)
    {


//the first if says if the bool is true and it is a space it will print out the initial
        if (check && name[i] != ' ')
        {
            printf("%c", toupper(name[i]));
            check = false;
        }//the else if sets the bool to true
        else if (name[i] == ' ')
        {
            check = true;
        }

    }




    printf("\n");







}
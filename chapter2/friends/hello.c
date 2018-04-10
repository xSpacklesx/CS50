#include <stdio.h>
#include <cs50.h>
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    else
    {
        string name = argv[1];
        printf("Hello, %s!\n", name);
    }
}
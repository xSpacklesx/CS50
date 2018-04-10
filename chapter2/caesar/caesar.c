#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Use the proper number of arguments");
        return 1;
    }
    int key = atoi(argv[1]);
    int ans = 0, var1 = 0, calc = 0;

    string source = get_string("plaintext:");
    printf("ciphertext: ");
    //take ascii subtract 65, then do equation, then add 65
    for (int i = 0, len = strlen(source); i < len; i++)
    {
        if (isupper(source[i]))
        {
            var1 = (source[i] - 65);
            calc = (var1 + key) % 26;
            ans = calc + 65;
            printf("%c", ans);
        }
        if (islower(source[i]))
        {
            var1 = (source[i] - 97);
            calc = (var1 + key) % 26;
            ans = calc + 97;
            printf("%c", ans);
        }


    }
    printf("\n");
}
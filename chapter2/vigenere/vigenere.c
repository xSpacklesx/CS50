#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[])
{
    //Blame Carter
    if (argc != 2
        || (strspn(argv[1], "abcdefghijklmnopwrstuvwxyzWERTYUIOPASDFGHJKLZXCVBNMQ") != strlen(argv[1])))
    {
        printf("Use the proper arguments");
        return 1;
    }


    string key = (argv[1]);
    int ans = 0;
    int calc = 0;
    int q = 0;
    string source = get_string("plaintext: ");
    printf("ciphertext: ");
    //take ascii subtract 'A', then do equation, then add 'A'

    for (int i = 0, len = strlen(source); i < len; i++)
    {
        if (q == strlen(key))
        {
            q = 0;
        }
        if (isupper(source[i]))
        {
            calc = (((source[i] - 'A') + toupper(key[q]) - 'A') % 26);
            ans = calc + 'A';
            printf("%c", ans);
            q++;
            //key[i] = key[i] + 'A';
        }
        if (islower(source[i]))
        {
            calc = (((source[i] - 'a') + tolower(key[q]) - 'a') % 26);
            ans = calc + 'a';
            printf("%c", ans);
            q++;
            //key[i] = key[i] + 'a';
        }
        if (isupper(source[i]) == false && islower(source[i]) == false)
        {
            printf("%c", source[i]);
        }

    }
    printf("\n");
}

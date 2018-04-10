#define _XOPEN_SOURCE
#include <unistd.h>
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
        return 1;
    }
    string pass = NULL;


    for (int i = 'a'; i <= 'z'; i++)
    {
        char snoot[] = {i};
        pass = crypt(snoot, "50");
        if (strcmp(pass, argv[1]) == 0)
        {
            printf("%s\n", snoot);
        }
        for (int j = 'a'; j <= 'z'; j++)
        {
            char snoot2[] = {i, j};
            pass = crypt(snoot2, "50");
            if (strcmp(pass, argv[1]) == 0)
            {
                printf("%s\n", snoot2);
            }
            for (int k = 'a'; k <= 'z'; k++)
            {
                char snoot3[] = {i, j, k};
                pass = crypt(snoot3, "50");
                if (strcmp(pass, argv[1]) == 0)
                {
                    printf("%s\n", snoot3);
                }
                for (int l = 'a'; l <= 'z'; l++)
                {
                    char snoot4[] = {i, j, k, l};
                    pass = crypt(snoot4, "50");
                    if (strcmp(pass, argv[1]) == 0)
                    {
                        printf("%s\n", snoot4);
                    }

                }
            }

        }


    }






}

//andi:50.jPgLzVirkc
//jason:50YHuxoCN9Jkc
//malan:50QvlJWn2qJGE
//mzlatkova:50CPlMDLT06yY
//patrick:50WUNAFdX/yjA
//rbowden:                      50fkUxYHbnXGw
//summer:50C6B0oz0HWzo
//stelios:50nq4RV/NVU0I
//wmartin:50vtwu4ujL.Dk
//zamyla:50i2t3sOSAZtk
//snoot[i] = toupper(snoot[i]);
//pass = crypt(snoot, "50");

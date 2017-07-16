#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }

    int gap = atoi(argv[1]);

    printf("plaintext: ");

    string start = get_string();

    int wrap = gap % 26;

    printf("ciphertext: ");
    for(int i = 0, len = strlen(start); i < len; i++)
    {

        if (gap < 27)
        {
            // проверка на то, является ли символ после добавления буквой
            if (isalpha(start[i] = start[i] + gap))
            {
                printf("%c", start[i] = (start[i]-gap) + gap);
                // печатаю полученный символ
            } else
            {
                // если деление по модулю равно нулю, значит просто переходим круг букв
                printf("%c", start[i] = ((start[i] - gap)-26) + gap);
            }
        }
        else
        {
            if (wrap > 0 )
            {
                printf("%c", start[i] = start[i] + wrap);
                // printf("%i", wrap);
            }
        }
    }
    printf("\n");
    return 0;
}

// если деление по модулю на 26 больше нулю, то
            //
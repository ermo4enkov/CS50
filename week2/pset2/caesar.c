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

    // превращаю строку в число
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
            if (!isalpha(start[i]))
            {
                printf("%c", start[i]);
            }
            else if (isalpha(start[i] = start[i] + gap))
            {
                // печатаю полученный символ
                printf("%c", start[i] = (start[i]-gap) + gap);
            }
            else
            {
                // если полученный символ не буква, то отматываю назад на 26 символов и приплюсовываю свой гэп
                printf("%c", start[i] = ((start[i] - gap)-26) + gap);
            }
        }
        // если гэп больше 27, значит больше круга букв
        else
        {
            if (isalpha(start[i] = start[i] + wrap))
            {
                printf("%c", start[i] = (start[i] - wrap) + wrap);
            }
            else
            {
                printf("%c", start[i] = (start[i] - wrap) + wrap - 26);
            }
        }
    }
    printf("\n");
    return 0;
}
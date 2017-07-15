#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string fullName = get_string();

    if (fullName != NULL)
    {
        printf("%c", toupper(fullName[0]));
        for (int i = 0, len = strlen(fullName); i < len; i++)
        {
            if (fullName[i] == ' ')
            {
                printf("%c", toupper(fullName[i+1]));
            }
        }
    }
    printf("\n");
}
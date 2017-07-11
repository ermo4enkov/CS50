#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char();

    if (c == 'y')
    {
        printf("It is yes\n");
    }
    else if (c == 'n')
    {
        printf("It is no\n");
    }
    else
    {
        printf("It is error\n");
    }
}
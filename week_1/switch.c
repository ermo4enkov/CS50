#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char();

    switch(c)
    {
        case 'y':
        case 'Y':
            printf ("It is yes\n");
            break;
        case 'n':
        case 'N':
            printf ("It is no\n");
            break;
        default:
            printf ("It is error\n");
            break;
    }

}
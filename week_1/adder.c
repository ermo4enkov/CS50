#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Put a number, please ");
    int x = get_int();

    printf("Put a second number, please \n");
    int y = get_int();

    printf("%i plus %i is: %i\n", x, y, x + y);
    printf("%i minus %i is: %i\n", x, y, x - y);
    printf("%i multiple %i is: %i\n", x, y, x * y);
    printf("%i divide %i is: %i\n", x, y, x / y);
    printf("reminder of %i divided by %i is: %i\n", x, y, x % y);

}
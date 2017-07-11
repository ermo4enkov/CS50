#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Put a number, please ");
    float x = get_int();

    printf("Put a second number, please \n");
    float y = get_int();

    printf("%f plus %f is: %f\n", x, y, x + y);
    printf("%f minus %f is: %f\n", x, y, x - y);
    printf("%f multiple %f is: %f\n", x, y, x * y);
    printf("%f divide %f is: %f\n", x, y, x / y);

}
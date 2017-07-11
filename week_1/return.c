#include <cs50.h>
#include <stdio.h>

int getSquare(int x);

int main(void)
{
    printf("X is: ");
    int x = get_int();

    printf("X^X is: %i \n", getSquare(x));
}

int getSquare(int x)
{
    return x * x;
}
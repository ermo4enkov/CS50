#include <cs50.h>
#include <stdio.h>

void sayPhrase(string s, int n);
int main(void)
{
    sayPhrase("Hy", 3);
}

void sayPhrase(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s);
    }
}
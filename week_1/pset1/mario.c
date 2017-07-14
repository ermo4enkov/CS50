#include <cs50.h>
#include <stdio.h>

int buildPiramid(int height);

int main(void)
{
    int piramidHeight = 0;
	do
	{
	    printf("Hello, please enter the pyramid height more then 0, but less then 23: ");
	    piramidHeight = get_int();
	    if (piramidHeight == 0){
	        return 0;
	    }
	 } while (piramidHeight < 1 || piramidHeight > 23);

	 for (int i = 0; i < piramidHeight; i++)
	 {
	     for (int j = 0; j < piramidHeight - i - 1; j++)
	     {
	         printf("%s", " ");
	     }

	     for (int h = 0; h < i + 2; h++){
	         printf("#");
	     }

	     printf("\n");
	 }

	 return 0;
}
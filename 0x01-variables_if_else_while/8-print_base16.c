#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char m;
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}

        for (m = 'a'; m < 'g'; m++)
	{

	putchar(m);
	}

        putchar('\n');

        retunr (0);
}	

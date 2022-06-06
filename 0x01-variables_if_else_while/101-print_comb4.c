#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 < 2; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 3; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 < 4; dig3++)
			{
				
			putchar((dig1 % 10) + '0');
			putchar((dig2 % 10) + '0');
			putchar((dig3 % 10) + '0');

			if (dig1 == 1 && dig2 == 2 && dig3 == 3)
				continue;

			putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

#include "main.h"
/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 */
void print_number(int n)
{
	unsigned int i, j, count;

	if (n < 0)
	{
		_putchar(45);
		i = j * -1;
	}
	else
	{
		i = j;
	}

	j = i;
	count = 1;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((j / count) % 10) + 48);
	}
}

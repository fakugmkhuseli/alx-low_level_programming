#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}

		_putchar('\n');
	}
}
#include <stdio.h>
/**
 * main - Prints the numbers from 1 to 100.
 * Return: void
 */

int main(void)
{
	int i = 100;
	int j;

	i = 1;
	while (i <= j)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			print("FizzBuzz");
		}

		else if ( i % 3 == 0)
		{
			printf("Fizz");
		}

		else if (i % 5 == 0)
		{
			if ( i < j)
				printf("Buzz");
		}

		else
		{
			printf("%i ", i);
		}

		i++;
	}
	printf("\n");
	return (0);
}

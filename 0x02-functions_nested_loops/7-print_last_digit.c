#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @d: Digit to be printed
 * Return: value of the last digit
 */
int print_last_digit(int d)
{
	int last_digit = d % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}

#include "main.h"
/**
 * _puts - Prints a string, followed by a new ine, to stdout.
 * @str: String to be printed
 */

void _puts(char *str)
{
	while (*str)
		_puts(*str++);

	_putchar('\n');
}

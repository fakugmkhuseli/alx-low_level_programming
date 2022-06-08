#include "main.h"
/**
 *int _islower - Checks for lowercase character.
 *Return: 1 if character lowercase, Return 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

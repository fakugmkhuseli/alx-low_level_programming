#include "main.h"
/**
 * _islower - Function that checks for lowercase character
 *Return: 1 if lowercase, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return(0);
}

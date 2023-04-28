#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if a character is a digit
 *
 * @c: the character to be checked
 *
 * Return: 1 for digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

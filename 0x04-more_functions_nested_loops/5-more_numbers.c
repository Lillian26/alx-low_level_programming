#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14.
 * prints 10 times of the numbers from 0-14.
 *
 * Return: 0 Always.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}

#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 o 5 below 1024 (excluded)
 * that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

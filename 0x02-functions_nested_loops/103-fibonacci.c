#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, fib1 = 1, fib2 = 2, fib3, sum = 3;

	for (i = 2; i < 50; ++i)
	{
		fib3 = fib1 + fib2;
		if (fib3 < 4000000 && (fib3 % 2) == 0)
			sum += fib3;
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%ld\n", sum);
	return (0);
}

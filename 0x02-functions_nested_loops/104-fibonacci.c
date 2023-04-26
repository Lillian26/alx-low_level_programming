#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, fib1 = 1, fib2 = 2, fib3;

	printf("%ld, %ld", fib1, fib2);
	for (i = 2; i < 98; ++i)
	{
		fib3 = fib1 + fib2;
		printf(", %ld", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");
	return (0);
}

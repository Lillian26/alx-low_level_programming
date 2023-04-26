#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, fib1 = 1, fib2 = 2, fib3;

	printf("%ld, %ld", fib1, fib2);
	for (i = 2; i < 50; ++i)
	{
		fib3 = fib1 + fib2;
		printf(", %ld", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	return (0);
}

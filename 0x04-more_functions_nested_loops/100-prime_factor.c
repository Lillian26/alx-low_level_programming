#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long n = 612852475143, i, maxFactor;
	double sq = sqrt(n);

	for (i = 1; i <= sq; i++)
	{
		if (n % i == 0)
			maxFactor = n / i;
	}
	printf("%ld\n", maxFactor);
	return (0);
}

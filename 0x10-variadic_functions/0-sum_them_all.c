#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of parameters passed to the function
 * @...:variable number of parameters to calculate the sum of
 *
 * Return: if n == 0 return 0
 * otherwise return the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);

	return (sum);
}

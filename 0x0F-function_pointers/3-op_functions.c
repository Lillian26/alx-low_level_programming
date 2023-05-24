#include "3-calc.h"

/**
 * op_add - returns the sum of two numbers
 * @a: first number input
 * @b: second number input
 *
 * Return: returns the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: first number input
 * @b: second number input
 *
 * Return: returns the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 * @a: first number input
 * @b: second number input
 *
 * Return: returns the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of two numbers
 * @a: first number input
 * @b: second number input
 *
 * Return: returns the quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the reminder of the division of two numbers
 * @a: first number input
 * @b: second number input
 *
 * Return: returns the reminder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

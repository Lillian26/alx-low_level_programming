#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - prints a sentence before the main function
 * function is executed
 */

void first(void)
{
	printf("You're beat! and yest, you must allow,\n"
			"I bore my house upon my back!\n");
}

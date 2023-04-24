#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Lowercase alphabet except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char theChar, e, q;

	e = 'e';
	q = 'q';

	for (theChar = 'a'; theChar <= 'z'; theChar++)
	{
		if (theChar != e && theChar != q)
		{
			putchar(theChar);
		}
	}
	putchar('\n');
	return (0);
}

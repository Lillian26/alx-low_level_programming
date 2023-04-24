#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print small and capital letters for the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	char aLPH[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(aLPH[i]);
	}
	putchar('\n');
	return (0);
}

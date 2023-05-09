#include "main.h"

/**
 * _strncat - use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: the second string, to be added to
 *
 * @src: the first string, to add to the dest
 *
 * @n: The number of bytes from src to be added to dest
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}

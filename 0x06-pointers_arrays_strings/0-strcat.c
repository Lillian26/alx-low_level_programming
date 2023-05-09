#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: string onto which second str goes
 *
 * @src: first string
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

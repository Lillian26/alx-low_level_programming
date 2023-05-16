#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a copy of the string
 *
 * @str: string to copy
 *
 * Return: NULL or pointer to str copy
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		i++;
	if (i < 1)
		return (NULL);
	p = malloc(sizeof(char) * i);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		p[j] = str[j];
	return (p);
}

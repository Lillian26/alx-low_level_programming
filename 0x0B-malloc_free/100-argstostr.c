#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all args
 *
 * @ac: integer input
 * @av: character input
 *
 * Return: returns pointer to a string or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, buffK;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	k = buffK = 0;

	for (i = 0; av[i]; i++)
		for (j = 0; av[i][j]; j++)
			k++;
	p = (char *) malloc(k * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, buffK++)
			p[buffK] = av[i][j];
		p[buffK] = '\n';
		buffK++;
	}
	p[buffK] = '\0';
	return (p);
}

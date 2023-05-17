#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - helper function to count the number of words in a string
 * @strg: string input
 *
 * Return: number of words
 */

int count_words(char *strg)
{
	int flag = 0, c, w = 0;

	for (c = 0; strg[c] != '\0'; c++)
	{
		if (strg[c] == ' ')
			flag = 0;
		if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - splits a string into words
 *
 * @str: string input
 *
 * Return: returns a pointer to an array of strings
 * each string in array is null terminated
 * last element of array is NULL
 * or NULL
 */

char **strtow(char *str)
{
	char **p, *tmp;
	int i, j = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);
	p = (char **) malloc(sizeof(char *) * (words + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				p[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	p[j] = NULL;
	return (p);
}

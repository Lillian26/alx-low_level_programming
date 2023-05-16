#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - gives a pointer to a 2-dimensional array of integers
 *
 * @width: width variable
 * @height: height variable
 *
 * Return: returns pointer to 2 dimesional array
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int x, y;

	x = y = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **) malloc(sizeof(p) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		p[x] =  malloc(sizeof(int) * width);
		if (p[x] == NULL)
		{
			for (y = 0; y < width; y++)
				free(p[x]);
			free(p);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			p[x][y] = 0;
	}
	return (p);
}

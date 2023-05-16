#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and
 * initializes it with a specific char
 *
 * @size: size of the array
 * @c: the char to intialize array with
 *
 * Return: returns a pointer to the array
 * returns NULL if size is 0 or if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

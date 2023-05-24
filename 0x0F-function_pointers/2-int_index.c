/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0 else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}

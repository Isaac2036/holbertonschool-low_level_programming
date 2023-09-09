#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array elements
 * @size: is the number of elements in the array array
 * @cmp: returns the index of the first element for cmp
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
				i++;
			}
	}
	return (-1);
}

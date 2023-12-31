#include "function_pointers.h"

/**
 * array_iterator - function that displays the values of the array
 * @array: valor of the array
 * @size: size of the array
 * @action: pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

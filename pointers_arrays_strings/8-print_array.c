#include <stdio.h>
#include "main.h"
/**
 * print_array - Pritns n elements of an array of integers
 * @a: Array of int
 * @n: Numbers of elements of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");

}

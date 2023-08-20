#include <stdio.h>
#include "main.h"
/**
 * swap_int - Swap the value of integers
 * @a: The first int to be swapped
 * @b: The second int to be swapped
 *
 * Return : nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

#include "main.h"

/**
 * _abs - prints the absolute value
 * @n: The character to be checked
 * Return: the absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}

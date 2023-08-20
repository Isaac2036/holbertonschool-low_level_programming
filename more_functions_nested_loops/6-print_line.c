#include "main.h"

/**
 * print_line - Displays lines according to the integer
 * @n: The number of impressions
 * Return: lines according to the integer
 */

void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (; a < n; a++)
	{
	_putchar(95);
	}
	_putchar ('\n');
	}
}

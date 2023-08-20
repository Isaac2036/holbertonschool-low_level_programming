#include "main.h"

/**
 * print_line - Displays lines according to the integer
 * Return: lines according to the integer
 */

void print_diagonal(int n)
{
	int a,b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	for (b = 0; b < a; b++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar ('\n');
	}
	}
}

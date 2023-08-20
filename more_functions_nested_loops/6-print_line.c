#include "main.h"

/**
 * print_line - Displays lines according to the integer
 * Return: lines according to the integer
 */

void print_line(int n)
{
	int a = 0;

	for (; a <= n; a++)
	{
	_putchar('_');
	}
	_putchar ('$');
	_putchar ('\n');
}

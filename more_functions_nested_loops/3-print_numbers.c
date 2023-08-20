#include "main.h"

/**
 * print_numbers - Displays numbers 0 to 9 on a new line
 * Return: The number from 0 to 9
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
	_putchar(a + '0');
	a++;
	}

	_putchar('\n');
}

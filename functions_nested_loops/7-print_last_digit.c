#include "main.h"

/**
 * print_last_digit - prints the last number of any number
 * @n: The character to be checked
 * Return: the last number
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 10)
	{
	ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}

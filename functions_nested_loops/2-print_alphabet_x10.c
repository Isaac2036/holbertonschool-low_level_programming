#include "main.h"

/**
 * print_alphabet_x10 - Make the alphabet x10
 * Description: "this program prints the alphabet"
 * return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 1;

	while (i <= 10)
	{

	for (c = 'a'; c <= 'z'; c++)

	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}


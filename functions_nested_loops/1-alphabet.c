#include "main.h"

/**
 * main - Entry points
 * Description: "this program prints the alphabet"
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c<='z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}


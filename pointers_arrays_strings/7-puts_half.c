#include <stdio.h>
#include "main.h"
/**
 * puts_half - Pritns half of string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	i = (j - 1) / 2;
	i += 1;
	}
	else
	{
	i = j / 2;
	}

	for (; i < j; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');

}

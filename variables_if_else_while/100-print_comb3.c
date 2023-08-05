#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible different combinations of two digits.
 * Return: Always (Success)
 */

int main(void)
{
	int n, l;

	for (n = '0'; n < '9'; n++)
	{
	for (l = n + 1; l <= '9'; l++)
	{
	if (n != l)
	{
	putchar(n);
	putchar(l);
	if (n == '8' && l == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

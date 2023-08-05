#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible different combinations of three digits.
 * Return: Always (Success)
 */

int main(void)
{
	int n, l, m;

	for (n = '0'; n < '9'; n++)
	{
	for (l = n + 1; l <= '9'; l++)
	{
	for (m = l + 1; m <= '9'; m++)
	{
	if ((n != l) != m)
	{
	putchar(n);
	putchar(l);
	putchar(m);
	if (n == '7' && l == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

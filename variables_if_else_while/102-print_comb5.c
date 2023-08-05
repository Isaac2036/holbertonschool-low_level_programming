#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible combinations of two two-digit numbers.
 * Return: Always (Success)
 */

int main(void)
{
	int n, l;

	for (n = 0; n <= 98; n++)
	{
	for (l = n + 1; l <= 99; l++)
	{
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
	putchar(' ');
	putchar((l / 10) + '0');
	putchar((l % 10) + '0');
	if (n == 98 && l == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

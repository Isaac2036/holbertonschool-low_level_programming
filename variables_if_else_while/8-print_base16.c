#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Always (Success)
 */

int main(void)
{
	int n;
	char l;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	for (l = 'a'; l <= 'f'; l++)
	putchar(l);
	putchar('\n');

	return (0);
}

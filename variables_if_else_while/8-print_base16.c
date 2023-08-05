#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * Return: Always (Success)
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	putchar(l);
	putchar('\n');

	return (0);
}

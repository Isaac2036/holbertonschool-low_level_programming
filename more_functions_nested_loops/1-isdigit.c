#include "main.h"

/**
 * _isdigit - Check if a number
 * @x: The number to be checked
 * Return: 1 if number or 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}

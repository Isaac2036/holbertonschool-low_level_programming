#include "main.h"

/**
 * _isalpha - check if c is a alphabetic character
 * @c: The character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase and 0 if c is otherwise
 */

int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
	return (1);
} else if (c >= 97 && c <= 122)
{
	return (1);
}
else
{
	return (0);
}
}

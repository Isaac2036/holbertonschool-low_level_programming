#include <stdio.h>
#include "main.h"
/**
 * _strlen  - Return the length of the string
 * @str: The string to get the length
 * 
 * Return : the lenght of @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}

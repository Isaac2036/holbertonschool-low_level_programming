#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: number of the parameters passed in the function
 * @n: The number of int passed to the function
 * @...: Variable number of parameters to calculate the sum
 *
 * Return: The print of the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;

va_start(nums, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(nums);
}

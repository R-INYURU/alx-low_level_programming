#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_numbers - print the given numbers end with a newline
 * @separator: character printed between numbers
 * @n: number of number passed to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (!strcmp(separator, "") || n == 0)
		return;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if ((i + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
}

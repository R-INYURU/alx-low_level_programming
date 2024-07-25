#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings followed by a new line
 * @separator: separating characted for the string to be printed
 * @n: number of strings to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && (i + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}

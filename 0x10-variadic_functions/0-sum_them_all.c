#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculate the sum of the passed arguments
 * @n: number of arguments passed
 *
 * Return: sum of arguments or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum = 0;

	va_start(arg, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);

	return (sum);
}

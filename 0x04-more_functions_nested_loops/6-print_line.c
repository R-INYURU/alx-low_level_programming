#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n < 1)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}

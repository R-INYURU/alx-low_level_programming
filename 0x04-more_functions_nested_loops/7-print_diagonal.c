#include "main.h"

/**
 * print_diagonal - draws a diagonal line in terminal
 * @n: size of the diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 1)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

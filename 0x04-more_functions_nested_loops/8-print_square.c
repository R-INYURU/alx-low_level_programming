#include "main.h"

/**
 * print_square - prints square made of #, end with new line
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int j;
	int i;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

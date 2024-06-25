#include "main.h"
#include <stdio.h>

/**
 * prints - print out
 * @prod: number to print
 *
 * Return: void
 */
void prints(int prod)
{
	if (prod <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(prod + 48);
	}
	else if (prod > 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((prod / 10) + 48);
		_putchar((prod % 10) + 48);
	}
}

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int mlple;
	int mltlr;
	int prod;

	for (mlple = 0; mlple < 10; mlple++)
	{
		for (mltlr = 0; mltlr < 10; mltlr++)
		{
			prod = mlple * mltlr;
			if (mltlr == 0)
				_putchar(prod + 48);

			else
			{
				prints(prod);
			}
		}
			_putchar('\n');
	}
}

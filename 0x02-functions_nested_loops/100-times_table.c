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
	int tns;
	int hndrd;

	if (prod <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(prod + 48);
	}
	else if (prod > 9 && prod < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((prod / 10) + 48);
		_putchar((prod % 10) + 48);
	}
	else if (prod > 99 && prod < 1000)
	{
		hndrd = prod / 100;
		tns = prod - (hndrd * 100);
		_putchar(',');
		_putchar(' ');
		_putchar(hndrd + 48);
		_putchar((tns / 10) + 48);
		_putchar((prod % 10) + 48);
	}
}

/**
 * print_times_table - prints the n times table
 * @n: times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int mlple;
	int mltlr;
	int prod;

	for (mlple = 0; mlple <= n; mlple++)
	{
		for (mltlr = 0; mltlr <= n; mltlr++)
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

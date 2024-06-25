#include "main.h"

/**
 * prints - print numb with _putchar
 * @numb: number to print
 *
 * Return:void
 */
void prints(int numb)
{
	int rmndr;
	int tns;
	int hndrd;

	if(numb< 0)
	{
		numb *= (-1);
		_putchar('-');
	}

	if (numb < 10)
		_putchar(numb + 48);
	else if (numb > 9 && numb < 100)
	{
		tns = numb / 10;
		rmndr = numb % 10;
		_putchar(tns + 48);
		_putchar(rmndr + 48);
	}
	else if (numb > 99 && numb < 1000)
	{
		hndrd = numb / 100;
		tns = (numb / 10) / 10;
		rmndr = numb % 10;
		_putchar(hndrd + 48);
		_putchar(tns + 48);
		_putchar(rmndr + 48);
	}
}

/**
 * print_to_98 - print all natural number to 98
 * @n: starting from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			prints(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n == 98)
		prints(n);
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			prints(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_m - print numb of millions
 * @numb: number to print
 *
 * Return: void
 */
void print_m(int numb)
{
	int rmndr, tns, hndrd, thsnd, tnthsnd, hndthsnd, mills;

	if (numb > 99999 && numb < 1000000)
	{
		hndthsnd = numb / 100000;
		tnthsnd = (numb - (hndthsnd * 100000)) / 10000;
		thsnd = (numb - ((hndthsnd * 100000) + (tnthsnd * 10000))) / 1000;
		hndrd = (numb - ((hndthsnd * 100000) + (tnthsnd * 10000) +
						 (thsnd * 1000))) / 100;
		tns = (numb - ((hndthsnd * 100000) + (tnthsnd * 10000) +
					   (thsnd * 1000) + (hndrd * 100))) / 10;
		rmndr = numb % 10;
		_putchar(hndthsnd + 48);
		_putchar(tnthsnd + 48);
		_putchar(thsnd + 48);
		_putchar(hndrd + 48);
		_putchar(tns + 48);
		_putchar(rmndr + 48);
	}
	else if (numb > 999999 && numb < 10000000)
	{
		mills = numb / 1000000;
		hndthsnd = (numb - (mills * 1000000)) / 100000;
		tnthsnd = (numb - ((mills * 1000000) + (hndthsnd * 100000))) / 10000;
		thsnd = (numb - ((mills * 1000000) + (hndthsnd * 100000) +
					 (tnthsnd * 10000))) / 1000;
		hndrd = (numb - ((mills * 1000000) + (hndthsnd * 100000) +
					 (tnthsnd * 10000) + (thsnd * 1000))) / 100;
		tns = (numb - ((mills * 1000000) + (hndthsnd * 100000) +
				   (tnthsnd * 10000) + (thsnd * 1000) + (hndrd * 100))) / 10;
		rmndr = numb % 10;
		_putchar(mills + 48);
		_putchar(hndthsnd + 48);
		_putchar(tnthsnd + 48);
		_putchar(thsnd + 48);
		_putchar(hndrd + 48);
		_putchar(tns + 48);
		_putchar(rmndr + 48);
	}
}

/**
 * print_mill - print numb into mills with _putchar
 * @numb: numb to print
 *
 * Return: void
 */
void print_mill(int numb)
{
	int rmndr, tns, hndrd, thsnd, tnthsnd;

	if (numb > 9999 && numb < 10000)
	{
		tnthsnd = numb / 10000;
		thsnd = (numb - (tnthsnd * 10000)) / 1000;
		hndrd = (numb - ((tnthsnd * 10000) + (thsnd * 1000))) / 100;
		tns = (numb - ((tnthsnd * 10000) + (thsnd * 1000) +
					   (hndrd * 100))) / 10;
		rmndr = numb % 10;
		_putchar(tnthsnd + 48);
		_putchar(thsnd + 48);
		_putchar(tns + 48);
		_putchar(rmndr + 48);
	}
	else if (numb > 9999 && numb < 100000)
	{
		tnthsnd = numb / 10000;
		thsnd = (numb - (tnthsnd * 10000)) / 1000;
		hndrd = (numb - ((tnthsnd * 10000) + (thsnd * 1000))) / 100;
		tns = (numb - ((tnthsnd * 10000) + (thsnd * 1000) +
					   (hndrd * 100))) / 10;
		rmndr = numb % 10;
		_putchar(tnthsnd + 48);
		_putchar(thsnd + 48);
		_putchar(hndrd + 48);
		_putchar(tns + 48);
		_putchar(rmndr + 48);
	}
	else if (numb > 99999 && numb < 10000000)
		print_m(numb);
}

/**
 * prints - print numb with _putchar
 * @numb: number to print
 *
 * Return:void
 */
void prints(int numb)
{
	int rmndr, tns, hndrd, thsnd;

	if (numb < 0)
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
		tns = (numb - (hndrd * 100)) / 10;
		rmndr = numb % 10;
		_putchar(hndrd + 48);
		_putchar(tns + 48);
		_putchar(rmndr + 48);
	}
	else if (numb > 999 && numb < 10000)
	{
		thsnd = numb / 1000;
		hndrd = (numb - (thsnd * 1000)) / 100;
		tns = (numb - ((thsnd * 1000) + (hndrd * 100))) / 10;
		rmndr = numb % 10;
		_putchar(thsnd + 48);
		_putchar(hndrd + 48);
		_putchar(tns + 48);
		_putchar(rmndr + 48);
	}
	else
		print_mill(numb);
}

/**
 * print_array - print the n element of an array
 * @a: array to print from
 * @n: n element to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n  - 1))
			{
				prints(a[i]);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				prints(a[i]);
			}
		}
	}
	_putchar('\n');
}

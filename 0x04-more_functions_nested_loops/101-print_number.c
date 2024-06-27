#include "main.h"

/**
 * print_number - print an integer
 * @numb: this integer
 *
 * Return: void
 */
void print_number(int numb)
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
}

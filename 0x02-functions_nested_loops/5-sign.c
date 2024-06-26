#include <stdio.h>
#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number
 *
 * Return: 1 if n greater 0 - 0 if n equal 0 , -1 is n less 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

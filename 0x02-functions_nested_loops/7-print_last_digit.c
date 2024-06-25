#include "main.h"

/**
 * print_last_digit - prints last digit of input number
 * @n: input number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int neg = 0;
	int dig = 0;

	if (n < 0)
	{
		n += 1;
		n *= (-1);
		neg = 1;
	}
	dig = n % 10;

	if (neg == 1)
		dig += 1;
	_putchar(dig + 48);

	return (dig);
}

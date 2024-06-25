#include "main.h"

/**
 * print_last_digit - prints last digit of input number
 * @n: input number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= (-1);
	_putchar ((n % 10) + 48);

	return (n % 10);
}

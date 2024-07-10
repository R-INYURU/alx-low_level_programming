#include "main.h"

/**
 * _sqrt - calculate square root of a number
 * @n: number to calculate
 * @i: parameter number
 *
 * Return: integer
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);

	if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number
 *
 * Return: -1 if no natural number, or the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

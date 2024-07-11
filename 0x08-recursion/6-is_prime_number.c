#include "main.h"

/**
 * prime_number - find the prime number of a give integer
 * @n: given integer
 * @i: parameter integer
 *
 * Return: integer
 */
int prime_number(int n, int i)
{
	if (n < 0)
		return (0);
	else if (n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	return (prime_number(n, i + 1));
}

/**
 * is_prime_number - returns 1 if input is 1 otherwise return 0
 * @n: input number
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}

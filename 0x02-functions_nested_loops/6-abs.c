#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: integer value
 *
 * Return: number converted to positive
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
		return (n);

	else
		n *= (-1);

	return (n);
}

#include "main.h"

/**
 * _pow_recursion - calculate the value of x raise to power of y
 * @x: 1st number
 * @y: 2nd number
 *
 * Return: power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

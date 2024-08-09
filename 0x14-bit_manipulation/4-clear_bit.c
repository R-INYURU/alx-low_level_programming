#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: value to clear its bit
 * @index: index of the bit to change
 *
 * Return: 1 if it worked or -1 if there is an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}

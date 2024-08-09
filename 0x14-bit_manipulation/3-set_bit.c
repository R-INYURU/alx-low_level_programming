#include "main.h"

/**
 * set_bit - set a value of a bit to 1 at given index
 * @n: value to set bit into
 * @index: bit index to change
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);

	*n |= (1 << index);
	return (1);
}

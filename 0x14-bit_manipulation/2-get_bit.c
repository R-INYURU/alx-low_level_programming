#include "main.h"

/**
 * get_bit - get the right shifted bit on specific index
 * @n: number to get bit from
 * @index: given index to shift
 *
 * Return: integer bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	if (n == 0 || index == 0)
		return (0);

	bit = (n >> index) & 1;

	return (bit);
}

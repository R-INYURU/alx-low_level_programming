#include "main.h"

/**
 * flip_bits - find number of bits to flip from on arg numb to the other arg
 * @n: argument number 1
 * @m: argument number 2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int cnt = 0;

	while (num)
	{
		if (num & 1)
			cnt++;
		num >>= 1;
	}
	return (cnt);
}

#include "main.h"

/**
 * _atoi - convert string to integer
 * @str: string to convert
 *
 * Return: integer value
 */
int _atoi(const char *str)
{
	int val = 0;
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		val = val * 10 + str[i] - '0';

	return (val);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string variable storing binary number
 *
 * Return: converted number, or 0
 * if there is a char in the arg. diff from 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, bit, rmndr = 0;
	unsigned int integer = 0, base = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	}
	bit = _atoi(b);

	for (i = 0; bit != 0; i++)
	{
		rmndr = bit % 10;
		bit /= 10;
		integer += rmndr * base;
		base = base * 2;
	}
	return (integer);
}

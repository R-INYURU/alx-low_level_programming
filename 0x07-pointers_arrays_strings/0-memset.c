#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: buffer to fill
 * @b: constant byte
 * @n: size of memory
 *
 * Return: pointer to memory of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

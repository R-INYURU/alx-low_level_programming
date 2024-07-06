#include "main.h"

/**
 * add_chars - add two character number
 * @c1: 1st character
 * @c2: 2nd character
 *
 * Return: sum of the two number
 */
char add_chars(char c1, char c2)
{
	if ((c1 > 47 && c1 < 59) && (c2 > 47 && c2 < 59))
		return ((c1 - '0') + (c2 - '0'));
	else
		return ('-');
}

/**
 * infinite_add - add two number string
 * @n1: 1st string
 * @n2: 2nd string
 * @r: buffer to store the results
 * @size_r: size of the buffer
 *
 * Return: pointer to result buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	int size_n1 = 0, size_n2 = 0;

	for (i = 0; n1[i] != '\0'; i++)
		size_n1++;
	for (i = 0; n2[i] != '\0'; i++)
		size_n2++;

	if (size_n1 > size_n2 || size_n1 == size_n2)
	{
		for (i = size_n1, j = 0; i > 0; i--, j++)
		{
			r[i] = (add_chars(n1[j], n2[j])) % 10;
			r[i + 1] = (add_chars(n1[j + 1], n2[j + 1])) / 10;
		}
	}
	else if (size_n1 < size_n2)
	{
		for (i = size_n1, j = 0; i > 0; i--, j = 0)
		{
			r[i] = (add_chars(n1[j], n2[j])) % 10;
			r[i + 1] = (add_chars(n1[j + 1], n2[j + 1])) / 10;
		}
	}

	if (size_r < size_n1 && size_r < size_n2)
		return (0);
	else
		return (r);
}

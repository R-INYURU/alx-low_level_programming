#include "main.h"

/**
 * _strncat - concatenate two strings using only n bytes
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int count = 0;

	for (i = 0; dest[i] != '\0'; i++)
		count++;

	for (i = count, j = 0; j < n; i++, j++)
		dest[i] = src[j];
	dest[count + n] = '\0';

	return (dest);
}

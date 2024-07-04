#include "main.h"

/**
 * _strncpy - copy one string variable to another using n bytes
 * @dest: destination variable
 * @src: source variable
 * @n: number of bytes
 *
 * Return: pointer to destination variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

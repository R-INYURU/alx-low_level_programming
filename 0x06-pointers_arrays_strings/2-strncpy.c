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
	int count = 0;

	for (i = 0; src[i] != '\n'; i++)
		count++;

	for (i = 0; i < n; i++)
	{
		if (i > (count * 2))
			break;
		else if (i > count)
			dest[i] = 0;
		else
			dest[i] = src[i];
	}

	return (dest);
}

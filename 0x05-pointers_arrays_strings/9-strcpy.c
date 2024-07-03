#include "main.h"

/**
 * _strcpy - copie string pointed by src to buffer pointed by dest
 * @dest: destination of string
 * @src: source of string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int count = 0;

	for (i = 0; src[i] != '\0'; i++)
		count++;

	for (i = 0; i < count; i++)
		dest[i] = src[i];
	dest[count] = '\0';

	return (dest);
}

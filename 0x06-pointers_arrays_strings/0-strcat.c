#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: 1st string
 * @src: 2nd string
 *
 * Return: welded string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int cnt_dest = 0;
	int cnt_src = 0;

	for (i = 0; src[i] != '\0'; i++)
		cnt_src++;

	for (i = 0; dest[i] != '\0'; i++)
		cnt_dest++;

	for (i = cnt_dest++, j = 0; i < (cnt_dest + cnt_src); i++, j++)
		dest[i] = src[j];

	dest[cnt_dest + cnt_src] = '\0';

	return (dest);
}

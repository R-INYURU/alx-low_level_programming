#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search from
 * @accept: string's byte to search for
 *
 * Return: pointer to the byte of s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (s == NULL || accept == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}

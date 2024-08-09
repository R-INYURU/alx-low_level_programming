#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	if (!s)
		return (NULL);
	for (i = 0; s[i] != c; i++)
		;

	return (&s[i]);
}

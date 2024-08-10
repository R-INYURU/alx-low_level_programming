#include "main.h"

/**
 * compare - compares 2 substrings
 * @s1: first substring to compare
 * @s2: second substring to compare
 *
 * Return: 1 if equal, or 0 if not
 */
int compare(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (*s2 == '\0');
}

/**
 * _strstr - locates a substring
 * @haystack: string to search from
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring or
 * NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
		return (NULL);
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
			return (haystack);
		haystack++;
	}
	return (NULL);
}

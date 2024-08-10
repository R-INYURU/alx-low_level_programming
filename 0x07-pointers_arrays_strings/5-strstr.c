#include "main.h"

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
	int i, j, k;

	if (haystack == NULL || needle == NULL)
		return (NULL);
	for (i = 0; haystack[i] != '\0'; i++, k = i)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			while (haystack[i] == needle[j])
			{
				if (needle[j++] == '\0')
					return (&haystack[k]);
				i++;
				j++;
			}
		}
	}
	return (NULL);
}

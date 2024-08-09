#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: substrng to count
 *
 * Return: length (int)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, cnt = 0;

	if (s == NULL || accept == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] ==  accept[j])
			{
				if (j > cnt)
					cnt = j;
			}
		}
	}
	return (cnt);
}

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - conctenate two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int cnt1 = 0, cnt2 = 0, i = 0, l = 0;
	char *str;

	for (cnt1 = 0; s1[cnt1]; cnt1++)
		;

	for (cnt2 = 0; s2[cnt2]; cnt2++)
		;
	cnt2++;

	str = malloc(sizeof(char) * (cnt2 + cnt1));
	if (!str)
		return (NULL);

	while (i < cnt1)
	{
		str[i] = s1[i];
		i++;
	}

	while (l < cnt2)
	{
		str[i + l] = s2[l];
		l++;
	}
	str[i + l] = '\0';
	return (str);
}

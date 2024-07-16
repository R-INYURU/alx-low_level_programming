#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - conctenate two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int cnt1 = 0, cnt2 = 0, i = 0;
	char *str;

	for (i = 0; s1[i] != '\0'; i++, cnt1++)
		;
	cnt1++;
	for (i = 0; s2[i] != '\0'; i++, cnt2++)
		;
	cnt2++;
	
	printf("size of cnt1: %d & cnt2: %d\n", cnt1, cnt2);
	str = malloc(sizeof(char) * (cnt1 + cnt2));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i <= cnt1)
	{
		str[i] = s1[i];
		i++;
	}

	while (i <= (cnt1 + cnt2))
	{
		str[i] = s2[i];
		i++;
	}
	return (str);
}

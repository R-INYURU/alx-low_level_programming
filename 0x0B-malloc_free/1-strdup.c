#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in mem that contains
 * copy to the string given in parameter.
 * @str: string to copy
 *
 * Return: pointer to newly allocated space
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, size = 0;

	if (str != NULL)
	{
		while (str[i] != '0')
		{
			i++;
			size++;
		}
	}
	else
		return (NULL);

	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL || i == 0)
		return (NULL);

	i = 0;
	while (size != 0)
	{
		s[i] = str[i];
		size--;
		i++;
	}

	return (s);
}

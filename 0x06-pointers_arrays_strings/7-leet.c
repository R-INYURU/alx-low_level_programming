#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	int n = 5;
	char numb[] = {'4', '3', '0', '7', '1'};
	char upcase[] = {'A', 'E', 'O', 'T', 'L'};
	char locase[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <  n; j++)
		{
			if (str[i] == upcase[j] || str[i] == locase[j])
				str[i] = numb[j];
		}
	}
	return (str);
}

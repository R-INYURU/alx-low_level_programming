#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to capitalize string
 */
char *cap_string(char *str)
{
	int i, j;

	for (i = 0, j = 1; str[i] != '\0'; i++, j++)
	{
		if (str[i] == '\t')
			str[i] = ' ';
		if (str[j] > 96 && str[j] < 123)
		{
			if (str[i] == ' ' ||
				str[i] == '\t' ||
				str[i] == '\n' ||
				str[i] == ',' ||
				str[i] == ';' ||
				str[i] == '.' ||
				str[i] == '!' ||
				str[i] == '?' ||
				str[i] == '"' ||
				str[i] == '(' ||
				str[i] == ')' ||
				str[i] == '{' ||
				str[i] == '}')
				str[j] -= 32;
		}
	}
	return (str);
}

#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase
 * @str: string to convert to uppercase
 *
 * Return: pointer to the converted string
 */
char *string_toupper(char *str)
{
	int i;
	int count = 0;
	char *newstr = str;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	for (i = 0; i < count; i++)
	{
		if (str[i] > 96 && str[i] < 123)
			newstr[i] = str[i] - 32;
		else
			newstr[i] = str[i];
	}
	newstr[count + 1] = '\0';
	return (newstr);
}

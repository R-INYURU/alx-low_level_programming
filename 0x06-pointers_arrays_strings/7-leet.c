#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
		case 'a':
		case 'A':
			str[i] = '4';
			break;
		case 'e':
		case 'E':
			str[i] = '3';
			break;
		case 'o':
		case 'O':
			str[i] = '0';
			break;
		case 't':
		case 'T':
			str[i] = '7';
			break;
		case 'l':
		case 'L':
			str[i] = '1';
		default:
			break;
		}
	}
	return (str);
}

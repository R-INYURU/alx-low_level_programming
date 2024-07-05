#include "main.h"

/**
 * rot13 - encodes a string using rot13 cipher
 * @str: string to cipher
 *
 * Return: ciphered string
 */
char *rot13(char *str)
{
	int i, j;
	char alphabets[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
						'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
						'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
						'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
						'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
						'y', 'z'};
	char rot13_cipher[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
						   'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
						   'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q',
						   'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a',
						   'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
						   'l', 'm'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabets[j])
			{
				str[i] = rot13_cipher[j];
				break;
			}
		}
	}
	return (str);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments of main func
 * @ac: number of arguments
 * @av: arguments list
 *
 * Return: pointer to string created
 */
char *argstostr(int ac, char **av)
{
	int i, l, j;
	int cnt = 0;
	char *str, *strarg;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* count the size of all string in argument */
	str = *av;
	for (i = 0; i < ac; i++)
	{
		for (l = 0; str[l]; l++)
			cnt++;
		str++;
	}
	printf("cnt is %d\n", cnt);
	/* write the content of all arguments and replace \0 with a \n */
	/* create a string to house all arguments passed */
	str = *av;
	strarg = malloc(sizeof(char *) * cnt);
	if (!strarg)
		return (NULL);
	printf("sizeof strarg is %ld\n",sizeof(strarg));
	for (i = 0; i < ac; i++)
	{
		j = 0;
		for (l = 0; l < cnt; l++, j++)
		{
			if (str[j] == '\0')
			{
				strarg[l] = '\n';
				break;
			}
			strarg[l] = str[j];
		}
		str++;
	}
	strarg[l] = '\0';

	return (strarg);
}

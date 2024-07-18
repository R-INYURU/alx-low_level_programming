#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l, cnt = 0;
	char *newstr;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;
	for (i = 0; s2[i]; i++)
		cnt++;

	newstr = malloc(sizeof(char *) * n);
	if (!newstr)
		return (NULL);

	for (i = 0; s1[i]; i++)
		newstr[i] = s1[i];

	if (n >= cnt)
	{
		for (l = 0; s2[l]; i++, l++)
			newstr[i] = s2[l];
		newstr[i] = '\0';
	}
	else
	{
		for (l = 0; l < n; i++, l++)
			newstr[i] = s2[l];
		newstr[i] = '\0';
	}
	return (newstr);
}

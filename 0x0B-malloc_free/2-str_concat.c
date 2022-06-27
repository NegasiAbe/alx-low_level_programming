#include "main.h"
#include<stdlib.h>
#include <stdio.h>

/**
 * str_concat -> concatinates two sstrings
 * @s1: string one too be concatenated
 * @s2: string two to be concated
 * Return: concatnated string
 */
char *str_concat(char *s1, char *s2)
{
int index1 = 0, index2 = 0, i = 0, len = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[index1])
		index1++;
	while (s2[index2])
		index2++;

	len = index1 + index2;
	s = malloc((sizeof(char) * len) + 1);

	if (s == NULL)
		return (NULL);

	index2 = 0;

	while (i < len)
	{
		if (i <= index1)
			s[i] = s1[i];

		if (i >= index1)
		{
			s[i] = s2[index2];
			index2++;
		}

		i++;
	}

	s[i] = '\0';
	return (s);
}

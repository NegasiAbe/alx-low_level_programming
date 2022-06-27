#include "main.h"
#include<stdlib.h>

/**
 * _strdup ->finds a newly allocated space
 * @str: string passed
 * Return: returns a charcter array
 */
char *_strdup(char *str)
{
int i = 0, j = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	s = malloc((sizeof(char) * j) + 1);

	if (s == NULL)
		return (NULL);

	while (i < j)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';
	return (s);
}

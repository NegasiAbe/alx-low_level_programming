#include "main.h"

/**
 * _strpbk -searches a string
 * @s: string to be searched
 * @accept: searcher
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}

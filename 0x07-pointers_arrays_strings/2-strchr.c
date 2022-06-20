#include "main.h"

/**
 * _strchr -finds a pointer of charcter c
 * @s: the string passed
 * @c:	an argument to be searched
 * Return: address of c first occurance
 * Null if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] && s[i] != 0)
	{
		if (s[i] == c)
			return (s + i);
	i++;
	}
	return ('\0');

}

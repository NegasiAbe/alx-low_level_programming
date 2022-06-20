#include "main.h"

/**
 * _strspn -finds occurance of charcter
 * @s: string to be searched
 * @accepted: searching charcter holder 
 * Return: number of occurances
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int  counter = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[i] == accept[i])
				counter++;
		}

	s++;
	}
	return (counter);
}

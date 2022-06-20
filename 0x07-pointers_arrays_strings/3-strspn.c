#include "main.h"

/**
 * _strspn -finds occurance of charcter
 * @s: string to be searched
 * @accepted: searching charcter holder 
 * Return: number of occurances
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int  counter = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				counter++;
			}
		j++;
		}
	i++;
	}
	return (counter);
}

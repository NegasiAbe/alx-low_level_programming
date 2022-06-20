#include "main.h"

/**
 * _strspn -finds occurance of charcter
 * @s: string to be searched
 * @accepted: searching charcter holder 
 * Return: number of occurances
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int  counter = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
	}
	return (counter);
}

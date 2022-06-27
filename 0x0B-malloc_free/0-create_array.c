#include "main.h"
#include<stdlib.h>
/**
 * create_array ->creates size c
 * @size: size of thearray
 * @c: character argument
 * Return: return an array char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		s[index] = c;
	}

	return (s);
}

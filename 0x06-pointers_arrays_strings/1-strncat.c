#include "main.h"

/**
 * _strncat -concatnates two string with size up str1
 * @dest:final or destination string
 * @src:source string
 * @n:number of characters to be concatneted
 * Return:conactenatd string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j] && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i + n + 1] = '\0';

	return (dest);
}

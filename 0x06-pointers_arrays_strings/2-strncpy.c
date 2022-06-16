#include "main.h"

/**
 * _strncpy -copies string of length n.
 *  @dest: destinatin string
 *  @src:source string
 *  @n:length of string to be coppied
 * Return:copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;


	while (j < n && src[j])
	{
	dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
		j++;
	}
	return (dest);
}

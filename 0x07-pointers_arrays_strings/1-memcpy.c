#include "main.h"

/**
 * _memcpy-copies  a memory area
 * @src: an area to be copied from
 * @dest: an area to be copied to
 * @n:size of bytes to be coppied
 * Return: the memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

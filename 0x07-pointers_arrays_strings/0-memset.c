#include "main.h"

/**
 * _memset - set the memory to constant value
 *  @s:memory area aponter
 *  @n: size to be filled
 *  @b:constat byte
 *  Return: no value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *ptr = s;

	for (i = 0; i <= n; i++)
	{
		ptr[i] = b;
	}
	return (ptr);
}

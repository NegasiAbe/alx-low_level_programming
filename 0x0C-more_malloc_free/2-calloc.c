#include "main.h"
#include<stdlib.h>

/**
 * _calloc ->memory allocation using calloc
 * @memb: member of members
 * @size: size of memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, len = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	p = malloc(len);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}

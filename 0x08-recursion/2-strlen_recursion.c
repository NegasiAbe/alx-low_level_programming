#include "main.h"

/**
 * _strlen_recursion - calcualtes the length
 * @s: string to be cheked
 * Return: length of the  string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	while (*s)
	{
	len++;
	s++;
	}
	return (len);
}

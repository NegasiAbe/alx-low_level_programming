#include "main.h"

/**
 * _strstr -substring locator
 * @haystack: a string to be checked
 * @needle:string to be searched
 * Return:string
 */
char *_strstr(char *haystack, char *needle)
{
int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0')
}

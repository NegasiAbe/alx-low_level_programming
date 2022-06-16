#include "main.h"
/**
* string_toupper - converting any string to upper case 
* @x: string parameter to be converted
* Return:  upper case string 
*/
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}

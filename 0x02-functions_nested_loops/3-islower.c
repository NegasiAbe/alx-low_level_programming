/**
* _islower -> checks if the character is lowercase
* @c: a charcter argument used to check the conditon 
* Return: returns 1 and 0 depending on condition
*/
#include "main.h"

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

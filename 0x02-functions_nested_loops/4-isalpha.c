#include "main.h"

/**
 *_isalpha - checks for alphabetic character, lowercase or uppercase
 *
 *@c: is the variable being tested
 *
 *Return: returns 1 if is a letter otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 *print_sign - prints the signs depending on the condition
 *
 *@n: is the condition being tested
 *
 *Return: returns 1 if n is greater than 0,
 * 0 if n is zero otherwise -1 if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - this prints the alphabet 10 times
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	char alpha, times;

	for (times = 0; times < 10; times++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}

}

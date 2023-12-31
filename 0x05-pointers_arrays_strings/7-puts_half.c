#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *puts_half - prints half of the string
 *
 *@str: string to be printed
 *
 *Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int i, l, m;

	l = strlen(str);
	m = l / 2;
	if (l % 2 == 0)
	{
		for (i = m; i < l; i++)
		{
			printf("%c", str[i]);
		}
	}
	else
	{
		for (i = m + 1; i < l; i++)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}

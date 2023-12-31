#include "main.h"
#include <stdio.h>

/**
 *times_table - prints the 9 times table
 *
 *Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = j * i;
			if (j != 0)
			{
				printf(",%3d", result);
			}
			else
			{
				printf("%d", result);
			}
		}
	printf("\n");
	}
}

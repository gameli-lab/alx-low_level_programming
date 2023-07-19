#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - searches for an integer
 *@array: array to iterate through
 *@size: size of the array
 *@cmp: pointer to the function
 *
 *Return: returns the integer otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	int i;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}

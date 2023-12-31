#include "main.h"
#include <stdio.h>

/**
 *_memcopy - copies n bytes of data from src to dest
 *
 *@dest: destionation of copied data
 *@src: source of data to be copied
 *@n: number of bytes to be copied
 *
 *Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

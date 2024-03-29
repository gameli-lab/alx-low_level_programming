#include "hash_tables.h"


/**
 * key_index - gives you the index of a key
 * @key: key of the index
 * @size: size of the array
 * Return: the index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code = 0;
	unsigned long int mod;

	while (*key)
	{
		hash_code = (hash_code * 33) ^ (*key);
		key++;
	}

	mod = hash_code % size;

	return (mod);
}

#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key
 * Description: uses djb2 algorithm
 * @key: key whose index is needed
 * @size: hash table size
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

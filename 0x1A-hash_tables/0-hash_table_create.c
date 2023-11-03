#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: hash table size
 * Return: pointer to new hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	/*hash table struct memory*/
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	/*Array memory - each node * array size*/
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	/*Initializing array slots to NULL*/
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	new_table->size = size;
	return (new_table);
}

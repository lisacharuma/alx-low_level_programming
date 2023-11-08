#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - new function
 * Description: retrieves value associated with a key
 * @ht: hash table from which value is retrieved
 * @key: key associated with value
 * Return: value if successful or NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	/*find index using key and hash function*/
	index = key_index((const unsigned char *)key, ht->size);
	/*Search forkey at index in the linked list*/
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}
	/*couldn't find key*/
	return (NULL);
}

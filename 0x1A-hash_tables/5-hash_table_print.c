#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - new function
 * Description: prints hash table
 * @ht: hash table to be printed
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first = 1;
	hash_node_t *current_node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (first)
			{
				printf("'%s': '%s'", current_node->key, current_node->value);
				first = 0;
			}
			else
			{
				printf(", '%s': '%s'", current_node->key, current_node->value);
			}
			current_node = current_node->next;
		}
	}
	printf("}\n");
}

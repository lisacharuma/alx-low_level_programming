#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at a given index
 * @head: ptr to the first item in the list
 * @index: node position
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current_node = head;

	if (head == NULL)
		return (NULL);
	while (current_node != NULL)
	{
		if (count == index)
			return (current_node);
		current_node = current_node->next;
		count++;
	}
	return (NULL);
}

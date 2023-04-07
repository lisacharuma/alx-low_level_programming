#include "lists.h"

/**
 * insert_nodeint_at_index - new function
 * Description: adds new node at given index
 * @head: pointer to list pointer
 * @idx: index
 * @n: value to be added
 * Return: new node address or null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int count = 0; /*tracks count*/
	listint_t *current_node; /*keeps track of position*/

	if (new_node == NULL) /*Allocation failure*/
		return (NULL);
	new_node->n = n; /*It gets passed val as val*/
	new_node->next = NULL;
	/* the above is the node to b added*/

	if (idx == 0) /*insert at the beginning*/
	{
		new_node->next = *head; /*poibt 2 e previous head*/
		*head = new_node; /*new node is the head*/
		return (*head);
	}
	else
	{
		current_node = *head; /*starts @ e beginning*/

		if (current_node == NULL) /*empty list*/
		{
			free(new_node);
			return (NULL);
		}
		while (count < idx - 1 && current_node->next != NULL)
		{
			current_node = current_node->next;
			count++;
		}
		if (count < idx - 1) /*idx out of range*/
		{
			free(new_node);
			return (NULL);
		}

		new_node->next = current_node->next;
		current_node->next = new_node;
		}
	}
	return (*head);
}

#include "lists.h"

/**
 * free_listint2 - new function
 * Description: frees the whole list
 * @head: pointer to pointer to head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	/**
	 * Freeing starts at the current pointed node
	 * in this case that node is the head
	 * Return immediately if pointed node is null
	 */
	listint_t *new_node;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		new_node = *head;
		*head = (*head)->next;
		free(new_node);
	}
	*head = NULL;
}

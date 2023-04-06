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
	 * Before freeing the head, make it point to new node
	 * Free head then make new_node the head
	 */
	listint_t *new_node, *next;

	if (head == NULL) /*Accessing null ptr cozs seg fault*/
		return;

	new_node = *head;

	while (new_node != NULL)
	{
		next = new_node->next;
		free(new_node);
		new_node = next;
	}
	*head = NULL;
}
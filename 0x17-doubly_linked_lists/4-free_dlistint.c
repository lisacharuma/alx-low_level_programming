#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: ptr to first element
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	/**
	 * create a temp node which starts pointing at head
	 * move to the next node
	 * free temp (current node)
	 */

	dlistint_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

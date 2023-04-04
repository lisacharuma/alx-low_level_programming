#include "lists.h"

/**
 * free_listint - function name
 * Description: frees a list
 * @head: pointer to the beginning of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *this_node = head; /*starts pointing to the same address as head*/

	while (head != NULL) /*as long as the node isnt list terminator*/
	{
		this_node = head;
		head = head->next; /*move to the next node*/
		free(this_node); /*free the current node*/
	}
}

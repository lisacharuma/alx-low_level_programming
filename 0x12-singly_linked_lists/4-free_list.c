#include "lists.h"

/**
 * free_list - new function
 * Description: frees a linked list
 * @head: pointer to the first node in the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *this_node;

	while (head != NULL) /*while the node isn't the list terminator*/
	{
		this_node = head->next; /*set head's next to new node*/
		free(head->str); /*free str space*/
		free(head); /*free current node*/
		head = this_node; /*make it the new head*/
	}
}

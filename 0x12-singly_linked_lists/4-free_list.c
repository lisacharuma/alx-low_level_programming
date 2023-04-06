#include "lists.h"

/*
 * free_list - new function
 * Description: frees a linked list
 * @head: pointer to the first node in the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *this_node = head; /*starts at where head is pointing*/

	while (head != NULL) /*while the node isn't the list terminator*/
	{
		this_node = head; /*start at the beginning of list*/
		head = head->next; /*mv 2 the nxt node*/
		free(this_node); /*free current node*/
	}
}

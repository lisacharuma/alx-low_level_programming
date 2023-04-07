#include "lists.h"

/**
 * get_nodeint_at_index - new function
 * Description: returns the node at nth index
 * @head: ptr to the first item in the list
 * @index: node position
 * Return: node at index n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0; /*keeps track of current index*/
	listint_t *current_node = head; /*set 2 nod ptd by head*/

	if (head == NULL)
		return (NULL);

	while (current_node != NULL) /*not list terminator*/
	{
		if (count == index)
			return (current_node); /*we've found e node*/
		current_node = current_node->next; /*mv 2 nxt nod*/
		count++; /*increment*/
	}
	return (NULL); /*node doesn't exit*/
}

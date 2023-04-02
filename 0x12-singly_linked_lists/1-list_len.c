#include "lists.h"

/**
 * list_len - new function
 * Description: returns number of elements in a linked list
 * @h: pointer to a node
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)/*as long as h isnt list terminator*/
	{
		h = h->next; /*mv 2 the nxt node*/
		counter++; /*increment counter by 1*/
	}
	return (counter);
}

#include "lists.h"

/**
 * print_listint - new fuction
 * Description: prints all elements of a list
 * @h: pointer to node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0; /*node count*/

	while (h != NULL) /*as long as h isn't list terminator*/
	{
		printf("%d\n", h->n);/* print the int value stored in n*/
		h = h->next; /* move to the next node */

		count++; /*increment counter by 1*/
	}
	return (count);
}

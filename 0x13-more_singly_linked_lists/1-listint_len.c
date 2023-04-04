#include "lists.h"

/**
 * listint_len - new function
 * Description: Returns number of elements in a list
 * @h: pointer to node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0; /*counts nodes*/

	while (h != NULL)/*run till list termination */
	{
		h = h->next; /* move to the next pointer*/
		count++; /*increment count by 1 */
	}
	return (count); /*this is the number of elements */
}

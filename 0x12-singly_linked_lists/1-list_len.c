#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;
	const list *current;

	while (current != NULL)
	{
		current = current->next;
		c++;
	}
	return (c);
}

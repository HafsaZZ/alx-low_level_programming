#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: linked list head
 *
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t num_element = 0;

	for (num_element = 0; current != NULL; num_element++, current = current->next)
		;
	return (num_element);
}

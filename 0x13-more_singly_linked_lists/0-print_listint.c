#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;
	const listint_t *current = h;

	for (num_nodes = 0; current != NULL; num_nodes++, current = current->next)
		printf("%d\n", current->n);
	return (num_nodes);
}

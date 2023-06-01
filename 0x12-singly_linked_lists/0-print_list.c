#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		c++;
	}
	return (c);
}

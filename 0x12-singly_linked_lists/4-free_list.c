#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the linked list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *n;

	current = head;

	while (current != NULL)
	{
		n = current->next;
		free(current->str);
		free(current);
		current = n;
	}
}

#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: linked list head
 *
 * Return:  the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *hold;
	size_t count = 0;

	current = head;
	if (current == NULL)
		exit(98);
	while (current != NULL)
	{
		hold = current;
		current = current->next;
		count++;
		printf("[%p] %d\n", (void *)hold, hold->n);
		if (hold < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
	}
	}
	return (count);
}

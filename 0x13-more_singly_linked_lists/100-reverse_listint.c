#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to linked list head
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *back;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	back = NULL;
	while (*head != NULL)
	{
		forward = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = forward;
	}
	*head = back;
	return (*head);
}

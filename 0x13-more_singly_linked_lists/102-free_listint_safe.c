#include "lists.h"

/**
 * _ra - reallocates memory for an arrayof pointers
 * @list: the old list
 * @size: size of the new list
 * @new: new node to add 
 *
 * Return: pointer to the new list
 */

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}
/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer of alinked list head
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, **list = NULL;
	size_t count = 0, i;

	if (h == NULL || *h == NULL)
		return (count);
	while (*h != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (*h == list[i])
			{
				*h = NULL;
				free(list);
				return (count);
			}
		}
		count++;
		list = _ra(list, count, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list);
	return (count);
}

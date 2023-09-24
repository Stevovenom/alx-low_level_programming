#include "lists.h"
/**
 * list_len - calculates the number of elements in a linked list
 * @h: pointer to the first node of the linked list
 * Return: The number of elemments in a linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}

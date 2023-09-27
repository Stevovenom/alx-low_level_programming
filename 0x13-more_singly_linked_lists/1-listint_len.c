#include  "lists.h"
/**
 * listint_len - it takes a pointer to the header of alinked list
 * @h: the pointer to the head of the node
 * Return: teh number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}

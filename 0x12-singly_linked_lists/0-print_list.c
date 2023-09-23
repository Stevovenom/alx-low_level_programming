#include "lists.h"
/**
 * print_list - the function prints all the elements of a list_t list
 * @h: serves as a pointer to the head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		i++;
	}
	printf("-> %u elements\n", i);
	return (i);
}

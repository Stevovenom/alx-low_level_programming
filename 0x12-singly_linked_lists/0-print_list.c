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

	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}

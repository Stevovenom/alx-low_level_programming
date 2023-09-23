#include "lists.h"
/**
 * print_lists - the function prints all the elements of a list_t list
 * @h: serves as a pointer to the head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0]");
		}
		else
		{
			printf("%s", h->str);
		}

		h = h->next;

		if (h != NULL)
		{
			printf(", ");
		}
		i++;
	}
	return (i);
}

#include "lists.h"
/**
 * free_listint2 - The function frees a listint_t list and sets head to NULL
 * @head: pointer to the pointer of the head node
 * Return: null
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *h;

	while (head == NULL || *head == NULL)
		return;

	h = *head;

	while (h != NULL)
	{
		temp = h;
		h = h->next;
		free(temp);
	}

	head = NULL;
}

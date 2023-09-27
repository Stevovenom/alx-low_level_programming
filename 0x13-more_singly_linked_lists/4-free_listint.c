#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: the pointer to the head of the node
 * Return: null
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head =  head->next;
		free(temp);
	}
}

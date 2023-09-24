#include "lists.h"
/**
 * free_list - the function that frees a list_t list
 * @head: the pointer to the first node
 * Return: NULL
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

	free(head->str);
	free(head);
}

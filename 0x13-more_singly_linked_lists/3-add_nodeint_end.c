#include "lists.h"
/**
 * add_nodeint_end - the function adds a node to the end
 * @head: a pointer to a pointer to the head of the node
 * @n: the number of strings to be added to that particular node
 * Return: the new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}

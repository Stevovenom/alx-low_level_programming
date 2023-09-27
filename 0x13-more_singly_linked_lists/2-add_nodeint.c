#include "lists.h"
/**
 * add_node - adds a new node to the beginnnig of singly linked list
 * @head: the pointer to the pointer of the first node
 * @str: pointer to string being stored in the new node
 * Return: address to the new element and NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;

	else
			new_node->next = *head;
		new_node->n = n;

		*head = new_node;
	return (*head);
}

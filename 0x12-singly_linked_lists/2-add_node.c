#include "lists.h"
/**
 * len - finds the length of the string
 * @str: the string whose length is to be sort
 * Return: The length of the string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * add_node - adds a new node to the beginnnig of singly linked list
 * @head: the pointer to the pointer of the first node
 * @str: pointer to string being stored in the new node
 * Return: address to the new element and NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;

	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	return (*head);
}

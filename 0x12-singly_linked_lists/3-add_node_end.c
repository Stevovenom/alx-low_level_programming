#include "lists.h"
/**
 * len - finds the length of the string
 * @str: string whose length is to be found
 * Return: the length of the string
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
 * create_node - it creates a new node
 * @str: pointer to char whosecontents will be copied
 * Return: The ew node
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the first node
 * @str: Th pointer to the character to be copied into the new node
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	temp = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = create_node(str);

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (*head);
}

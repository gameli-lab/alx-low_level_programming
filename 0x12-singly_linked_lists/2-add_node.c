#include "lists.h"

/**
 * add_node - adds a node to the beginning od the list
 * @head: pointer to pointer to the head
 * @str: pointer to the string
 * Return: address to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;
	new->len = len;

	new->next = *head;

	*head = new;

	return (new);
}

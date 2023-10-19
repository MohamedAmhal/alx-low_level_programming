#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_node_end - this is a function that add a new element in the end
 * @head: this is the header
 * @str: this is the string
 * Return: the pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t = *head;
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
i	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (t->next)
	{
		t = t->next;
	}
	t->next = new;
	return (new);
}

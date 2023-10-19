#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - this is a function that free memory
 * @head: the header
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
}

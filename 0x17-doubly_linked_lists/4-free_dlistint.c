#include "lists.h"

/**
 * free_dlistint - jfkfnfkfnc;f
 * @head: dhdkndfff
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}

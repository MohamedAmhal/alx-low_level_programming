#include "lists.h"

/**
 * add_dnodeint_end - adding the nodes
 *
 * @head: the head
 * @n: values
 * Return: adress
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *ni;

	ni = malloc(sizeof(dlistint_t));
	if (ni == NULL)
		return (NULL);

	ni->n = n;
	ni->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = ni;
	}
	else
	{
		*head = ni;
	}

	ni->prev = h;

	return (ni);
}

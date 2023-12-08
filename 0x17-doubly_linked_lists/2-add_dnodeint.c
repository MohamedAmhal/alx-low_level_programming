#include "lists.h"

/**
 * add_dnodeint - adding the new nodes
 *
 * @head: the head
 * @n: the values
 * Return: adress of any element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ni;
	dlistint_t *h;

	ni = malloc(sizeof(dlistint_t));
	if (ni == NULL)
		return (NULL);

	ni->n = n;
	ni->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	ni->next = h;

	if (h != NULL)
		h->prev = ni;

	*head = ni;

	return (ni);
}

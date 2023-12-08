#include "lists.h"

/**
 * print_dlistint - affichingg
 * dlistint_t: ths list that contient the element
 *
 * @h: the head
 * Return: the sum of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}

#include "lists.h"
#include <stddef.h>

/**
 * list_len - this is a function that return a lenght of a list
 * @h: this is the poiter
 * Return: return the legnth
 */

size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}

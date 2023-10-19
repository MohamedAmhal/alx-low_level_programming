#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct list_a - this is a linked lists
 * @str: the string
 * @len: the lenght of the string
 * @next: pointe of next node
 * Description: singly linked lists (les listes chainees)
 */
typedef struct list_a
{
	char *str;
	unsigned int len;
	struct list_a *next;
} list_t;
size_t print_list(const list_t *h);

#endif

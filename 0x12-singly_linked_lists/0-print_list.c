#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* print_list - this is the fucntion that printf the number of nodes
* @h: this is the pointer that pointe to onther nodes
* Return: the number od nodes
*/

size_t print_list(const list_t *h)
{
size_t q = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
q++;
}
return (q);
}

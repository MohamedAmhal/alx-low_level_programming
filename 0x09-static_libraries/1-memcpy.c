#include "main.h"

/**
* _memcpy - this function it seems to the last one but existe one differnte i
* n the second parameters
* @dest:the first variable
* @src:the second variable
* @n:the third variable
* Return:it return tha char return
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

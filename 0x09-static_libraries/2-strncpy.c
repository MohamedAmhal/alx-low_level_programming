#include "main.h"

/**
* _strncpy - this function copy the sting
* @dest:varible 1
* @src:varible 2
* @n:number of bytes
* Return:void
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;

j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}

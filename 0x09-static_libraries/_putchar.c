#include <unistd.h>
#include	"main.h"
/* .C Main For ALX Students Provided with Betty style */
/**
* _putchar - Entry point
* @x:the vribale contente the char
* Description: Provided Description
* Return: 0 (Success)
*/
int _putchar(char x)
{
return (write(1, &x, 1));
}

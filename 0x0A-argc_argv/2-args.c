#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the main function that recceve the variables
 * @argc:the first variable
 * @argv:the second variable
 * Return:always 0 suuss
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}

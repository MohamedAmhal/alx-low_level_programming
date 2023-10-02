#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is a function main
 * @argc:the first value compte the number of parameters
 * @argv:the seconde value contient the content
 * Return: 0 sssc
 */

int main(int argc, char **argv)
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}

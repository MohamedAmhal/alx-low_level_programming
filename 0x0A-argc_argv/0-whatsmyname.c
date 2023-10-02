#include <stdio.h>
#include <stdlib.h>
/**
 * this programme print the name followed by a new line
 * Return: always 0 (success)
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n",*argv++);
	return (0);
}

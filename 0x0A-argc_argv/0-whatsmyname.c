#include <stdio.h>
#include <stdlib.h>
/**
 * main - this programme print the name followed by a new line
 * @argc: the varible 1
 * @argv: the seconde one
 * Return: always 0 (success)
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}

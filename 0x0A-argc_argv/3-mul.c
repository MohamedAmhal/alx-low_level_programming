#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - the function main return the multiplication
 * @argc:hhhhhhhhhhhhhhhhhh
 * @argv:kkkkkkkkkkkkkkkk
 * Return: 0 succcess
 */

int main(int argc, char **argv)
{
	int i;

	if (argc == 0 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", i);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int c;

	c = 0;
	while (c < strlen(str)) /*count string*/

	{
		if (!isdigit(str[c])) /*check if str there are digit*/
		{
			return (0);
		}

		c++;
	}
	return (1);
}



/**
 * main - this is the main function
 * @argc:the fist variable
 * @argv:the second variable
 * Return: always success
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

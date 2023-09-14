#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * and new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a;
	long int m;
	long int i;

	a = 612852475143;
	m = -1;

	while (a % 2 == 0)
	{
		m = 2;
		a /= 2;
	}

	for (i = 3; i <= sqrt(a); i = i + 2)
	{
		while (a % i == 0)
		{
			m = i;
			a = a / i;
		}
	}

	if (a > 2)
		m = a;

	printf("%ld\n", m);

	return (0);
}

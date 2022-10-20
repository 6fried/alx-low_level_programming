#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 != 0)
			printf("%d", i);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int num1 = 0, num2 = 1, num3 = 0;

	for (i = 0; i < 50; i++)
	{

		num3 = num2 + num1;
		num1 = num2;
		num2 = num3;
		if (i != 49)
			printf("%ld, ", num3);
		else
			printf("%ld", num3);
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: param
 * @argv: param
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j = 0, n;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (n - coins[i] >= 0)
		{
			n -= coins[i];
			j++;
		}
	}

	printf("%d\n", j);
	return (0);
}

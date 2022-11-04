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
	int i, a, b;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] > '9' || argv[1][i] < '0')
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] > '9' || argv[2][i] < '0')
		{
			printf("Error\n");
			return (1);
		}

	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a + b);
	return (0);
}

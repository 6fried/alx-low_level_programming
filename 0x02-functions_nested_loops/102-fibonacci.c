#include <stdio.h>

/**
 * fibonacci - prints fibonqcci of n
 * @n: the number
 * Return: f(n)
 */

int fibonacci(int n)
{
	if (n == 0)
	{
		printf("%d ", 0);
		return (0);
	}
	else if (n == 1)
	{
		printf("%d ", 1);
		return (1);
	}
	else
	{
		int r;

		r = fibonacci(n - 2) + fibonacci(n - 1);
		printf("%d ", r);
		return (r);
	}
}

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	fibonacci(50);
	return (0);
}

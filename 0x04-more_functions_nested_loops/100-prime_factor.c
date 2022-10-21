#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, prime, n = 612852475143;

	for (i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			prime = i;
			n = n / i;
		}
	}
	printf("%lu\n", prime);
	return (0);
}

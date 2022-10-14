#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int n;
	char *msg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
		msg = "is zero";
	}
	else if (n > 0)
	{
		msg = "is positive";
	}
	else
	{
		msg = "is negative";
	}
	printf("%d %s\n", n, msg);
	return (0);
}

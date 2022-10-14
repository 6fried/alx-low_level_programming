#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main-entry point
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;
	char *msg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		msg = "and is greater than 5";
	}
	else if (lastDigit == 0)
	{
		msg = "and is 0";
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		msg = "and is less than 6 and not 0";
	}

	printf("Last digit of %d is %d %s", n, lastDigit, msg);

	return (0);
}

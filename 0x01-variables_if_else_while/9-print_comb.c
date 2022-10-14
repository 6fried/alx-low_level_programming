#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main-entry point
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

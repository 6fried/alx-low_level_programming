#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main-entry point
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
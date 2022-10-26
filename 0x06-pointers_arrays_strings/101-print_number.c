#include <unistd.h>
#include "main.h"

/**
 * print_number - prints an int
 *
 * @n: param
 */
void print_number(int n)
{
	int i;

	i = n % 10 + '0';
	write(1, &i, 1);
}

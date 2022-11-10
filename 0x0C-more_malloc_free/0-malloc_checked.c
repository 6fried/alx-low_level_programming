#include "main.h"

/**
 * malloc_checked - func
 * @b: param
 * Return: void *
 */
void *malloc_checked(unsigned int b)
{
	void *out = malloc(b);

	if (out == NULL)
		exit(98);

	return (out);
}

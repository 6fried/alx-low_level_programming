#include "main.h"
/**
 * create_array - func
 * @size: param
 * @c: param
 * Return: char*
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *out = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		out[i] = c;

	return (out);
}

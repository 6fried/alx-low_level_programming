#include "main.h"
/**
 * _strdup - func
 * @str: param
 * Return: char*
 */
char *_strdup(char *str)
{
	int i, j;
	char *out;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
	}
	j++;

	out = malloc(j * sizeof(char));
	if (out == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		out[i] = str[i];
	return (out);
}

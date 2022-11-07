#include "main.h"
/**
 * str_concat - func
 * @s1: param
 * @s2: param
 * Return: char*
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *out;

	if (s1 == NULL)
		j = 0;
	else
		for (j = 0; s1[j]; j++)
			;

	if (s2 == NULL)
		k = 0;
	else
		for (k = 0; s2[k]; k++)
			;
	k++;

	out = malloc((j + k) * sizeof(char));
	if (out == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		out[i] = s1[i];

	for (j = 0; s2[j]; j++)
		out[i + j] = s2[j];

	return (out);
}

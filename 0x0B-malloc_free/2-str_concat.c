#include "main.h"
/**
 * str_concat - func
 * @s1: param
 * @s2: param
 * Return: char*
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j, k;
	char *out;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j]; j++)
		;
	for (k = 0; s2[k]; k++)
		;
	k++;

	out = malloc((j + k) * sizeof(char));
	if (out == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		out[i] = s1[i];

	for (j = 0; j < k; j++)
		out[i + j] = s2[j];

	return (out);
}

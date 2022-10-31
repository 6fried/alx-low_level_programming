#include <stdio.h>
/**
 * _strncat - concatenates two strings.
 *
 * @dest: param
 * @src: param
 * @n: param
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j]; j++)
		;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i + j] = src[i];
	}

	return (dest);
}

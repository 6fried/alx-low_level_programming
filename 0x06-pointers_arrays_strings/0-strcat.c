/**
 * _strcat - concatenates two strings.
 *
 * @dest: param
 * @src: param
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j]; j++)
		;

	for (i = 0; src[i]; i++)
	{
		dest[i + j] = src[i];
	}

	return (dest);
}

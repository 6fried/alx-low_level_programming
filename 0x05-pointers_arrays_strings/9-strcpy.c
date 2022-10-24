/**
 * _strcpy - description
 *
 * @dest:  argument
 * @src:  argument
 * Return: return
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}

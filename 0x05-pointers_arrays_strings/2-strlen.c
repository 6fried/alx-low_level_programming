#include <string.h>
/**
 * _strlen - return the length of s
 * @s: pointer
 * Return: the size
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;

	return (size);
}

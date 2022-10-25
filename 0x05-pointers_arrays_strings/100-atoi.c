#include "main.h"
/**
 * _atoi -func
 *
 * @s: param
 * Return: return
 */
int _atoi(char *s)
{
	char *nbr = search_int(s);

	if (nbr != NULL)
		return (string_to_nbr(nbr));
	else
		return (0);
}

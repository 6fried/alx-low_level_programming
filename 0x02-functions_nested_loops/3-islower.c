#include "main.h"

/**
 * _islower - checks if c is lowercase
 * @c: the charachter to compare
 * Return: 1 is lowercase, 0 otherwise
 */

int _islower(int c)
{
	return ('a' <= c && 'z' >= c);
}

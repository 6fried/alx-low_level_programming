#include "main.h"

/**
 * _isalpha - checks if c is alphabetic
 * @c: the charachter to compare
 * Return: 1 is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	return (('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c));
}

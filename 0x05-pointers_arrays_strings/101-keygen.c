#include "main.h"
#include <time.h>
#include <stdio.h>

/**
 * main -func
 *
 * Return: return
 */
int main(void)
{
	char seed[] = "qwertyuioopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
	char password[22];
	int i, n, passw, cmp;

	srand(time(0));

	for (i = 0; passw < 2772; i++)
	{
		n = rand() % 10;
		password[i] = seed[n];
		passw += password[i];
	}

	cmp = 2772 - passw;
	password[i] = cmp;

	printf("%S\n", password);
	return (0);
}
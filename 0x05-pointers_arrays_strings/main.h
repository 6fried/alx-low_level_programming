#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
void _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

void print(const char *format)
{
	int i, j;

	for (j = 0; format[j]; j++)
		;

	for (i = 0; i < j; i++)
	{
		write(1, &format[i], 1);
	}
}

int string_to_nbr(char *str)
{
	int nbr = 0, i;

	for (i = 0; str[i] != '-' && str[i] && '+'; i++)
	{
		nbr *= 10;
		nbr += str[i] - '0';
	}
	/* if (str[i] == '-')
		nbr *= -1; */
	return nbr;
}

char *search_int(char *str)
{
	int i, j = 0;
	char *out;

	for (i = 0; str[i]; i++)
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			j = 0;
			while ('0' <= str[i] && str[i] <= '9')
			{
				i++;
				j++;
			}
		}
	}

	out = malloc((j + 1) * sizeof(char));

	for (i = 0; str[i]; i++)
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			j = 0;
			while ('0' <= str[i] && str[i] <= '9')
			{
				out[j] = str[i];
				i++;
				j++;
			}
		}
	}

	/*	for (i = 0; str[i]; i++)
		{
			if (str[i] == '-')
			{
				out[j] = '-';
				break;
			}
			else
				out[j] = '+';
		}*/

	return out;
}
#endif
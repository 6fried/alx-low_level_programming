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
#endif
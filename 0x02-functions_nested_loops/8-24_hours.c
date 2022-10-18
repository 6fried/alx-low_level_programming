#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (i = '0'; i <= '5'; i++)
			{
				for (i = '0'; i <= '9'; i++)
				{
					if ((i - '0') * 10 + (j - '0') * 10 < 24)
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
					}
				}
			}
		}
	}
}

#include "main.h"

/**
 * Each Minute - Print each minute of kack Bauer's day
 * from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int a, c;

	for (a = 0; a <= 23; a++)
	{
		for (c = 0; c <= 59; c++)
		{	
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar('\n');
		}
	}
}

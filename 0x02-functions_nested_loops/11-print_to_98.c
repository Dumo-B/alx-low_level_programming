#include "main.h"
#include <stdio.h>

/**
 * all_natural - prints all numbers from a number to 98.
 * numbers sorted and separated by a comma
 * @k: number passed
 */

void print_to_98(int k)
{
	int a, b;

	if (k <= 98)
	{
		for (a = k; a <= 98; a++)
		{
		if (a != 98)
			printf("%d, ", a);
		else if (a == 98)
			printf("%d\n", a);
		}
	} else if (k >= 98)
	{
		for (b = k; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
}

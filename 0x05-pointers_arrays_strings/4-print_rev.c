#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: A pointer to an int that will be changed
 * Return: void which means our answer is correct
 */

void print_rev(char *s)
{
	int z;

	z = 0;
	while (s[z] != '\0')
	{
		z++;
	}
	for (z = z - 1 ; z >= 0; z--)
	{
		_putchar (s[z]);
	}
	_putchar ('\n');
}

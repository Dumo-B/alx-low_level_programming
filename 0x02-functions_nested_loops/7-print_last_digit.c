#include "main.h"

/**
 * print_last_digit - prints the last digit of any number
 * @n: is the given number
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
		n = -n;
			d = n % 10;
	if (d < 0)
		d = -d;
	_putchar(d + '0');

	return (d);
}

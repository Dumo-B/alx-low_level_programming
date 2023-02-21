#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints 0 to 10 with new line
 *
 * Return: (0) Success
*/

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');

	return (0);
}

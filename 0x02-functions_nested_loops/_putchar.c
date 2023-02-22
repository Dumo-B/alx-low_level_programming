#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to the stdout
 * @c: is character to print
 *
 * Return: 1 on success
 * On error, -1 is returned and error is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


#include "main.h"

/**
 * _islower - checking for lowercase character
 * @c: is allocated as the character to be checked
 * Return: 1 if the character is lowercase, 0 if not.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isalpha - runs a check to see if the character is is an alphabet character.
 * @c: is the character
 * Return: 1 is c is alphabet letter, 0 if not.
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

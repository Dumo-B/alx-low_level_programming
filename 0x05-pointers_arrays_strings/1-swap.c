#include "main.h"

/**
 * swap_int -> given two integer swap the value the are holding
 * @a: parameter 1
 * @b: parameter 2
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

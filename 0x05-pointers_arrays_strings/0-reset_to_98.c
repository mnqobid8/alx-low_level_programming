#include "main.h"

/**
 * reset_to_98(int *n) - takes a pointer to an int as parameter and 
 * updates the value it points to to 98
 * Return : zero (Success)
 */

void reset_to_98(int *n)
{
	int *n;
	int p;

	p = 402;
	n = &p;

	_putchar(p);
	*n = 98;
	_putchar(p);
	_putchar("\n");

	return (0);
}

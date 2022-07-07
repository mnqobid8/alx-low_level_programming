#include <stdio.h>

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a new line
 */

int main(void)
{
	int j;

	for (j = 97;j < 123;j++)
	{
		putchar(j);
	}
	putchar("\n");
	return (0);
}

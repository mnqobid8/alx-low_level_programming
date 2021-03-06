#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{/*while loop - continues infinitely as long as condition is met*/
		putchar(i);
	}
	/*@i: is not incremented so remains as 0 hence i is always less than 10 and the while loops is infinite*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

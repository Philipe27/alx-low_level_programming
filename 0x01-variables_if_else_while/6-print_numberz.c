#include <stdio.h>

/**
 * main - This is the entry point of the code
 *
 * This code prints out the single digits using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');

		num++;
	}
	putchar('\n');
	return (0);
}

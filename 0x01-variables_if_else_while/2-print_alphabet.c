#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * The program prints out all the lower case alphabet.
 * It uses the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);

		alp++;
	}
	putchar('\n');
	return (0);
}

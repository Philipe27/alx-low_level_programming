#include <stdio.h>
/**
 * main: This is the entty point of programme
 *
 * This programme prints out the lower cae letter with put char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';
	
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return 0;
}

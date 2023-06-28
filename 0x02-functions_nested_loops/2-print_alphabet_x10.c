#include "main.h"
/**
 * print_alphabet_x10- this is the start of tge function 
 *
 * This function prints the lower case alphabet ten times
 *
 * Return: Always sucsess
 */
void print_alphabet_x10(void)
{
	int out = 0;
	char ltt = 'a';

	while (out < 10)
	{
		int i = 0;
		while (i <= 26)
		{
			_putchar(ltt);
			ltt++;
			i++;
		}
		out++;
	}
	_putchar('\n');
}

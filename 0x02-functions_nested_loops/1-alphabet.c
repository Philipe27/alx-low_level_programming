#include "main.h"
/**
 * print_alphabet - This the entry point of tye function
 *
 * This function prints out the _putchar ffunction to console
 *
 * Return Always 0
 */
void print_alphabet(void)
{
	char apl = 'a';
		while (apl <= 'z')
		{
			_putchar(apl);
			apl++;
		}
	_putchar('\n');
}

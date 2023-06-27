#include <stdio.h>
#include "main.h"
/**
 * main - This the entry point of tye function
 *
 * This function prints out the _putchar ffunction to console
 *
 * Return Always 0
 */
void print_alphabet(void);
int main(void)
{
	char apl = 'a';
		while(apl <= 'z')
		{
			putchar(apl);
			apl++;
		}
	putchar('\n');
	return (0);
}

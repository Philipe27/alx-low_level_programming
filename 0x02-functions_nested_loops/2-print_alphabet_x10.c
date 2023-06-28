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
	int i;
	char alp;

	for (i = 0; i < 10; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_sign - This is the entry
 * @n: This is a place holder
 *
 * This cheak if n is positve, negative or 0
 *
 * Return: always sucsecc
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

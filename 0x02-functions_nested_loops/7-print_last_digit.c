#include "main.h"
/**
 * print_last_digit- This the entry p[oint
 * @num: This is a placed holde
 *
 * This function returns the last digit of number
 *
 * Return: Always sucess
 */
int print_last_digit(int num);
{
	int last_digit;

	if (num < 0)
		num = -num;

	last_digit = num % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}

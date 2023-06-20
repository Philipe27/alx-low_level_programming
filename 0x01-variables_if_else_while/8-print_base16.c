#include <stdio.h>
/**
 * main - entry point
 *
 * This print out hexa decimal
 *
 * Return: o (Sucsecc)
 */
int main(void)
{
    int digit = 0;

    while (digit < 10)
    {
	    putchar(digit + '0');
	    digit++;
    }
    
    digit = 0;

    while (digit < 6)
    {
	    putchar(digit + 'a');
	    digit++;
    }
    putchar('\n');

    return 0;
}

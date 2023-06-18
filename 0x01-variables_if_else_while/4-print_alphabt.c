#include <stdio.h>

/**
 * main - this is the entry point of the programme
 *
 * This programme prints all letters except for q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'q' && alp != 'e')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}

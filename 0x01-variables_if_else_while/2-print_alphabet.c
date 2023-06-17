#include <stdio.h>

/*
 * the msin function is to print out all lower case letters
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

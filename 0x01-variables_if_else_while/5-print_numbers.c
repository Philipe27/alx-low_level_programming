#include <stdio.h>

/**
 * main - This is the start of the programme
 *
 * This programmeis expectexd to print out all sinhle digits from 0
 *
 * Return: Always 0 (Sucsess)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d ", num);
		num++;
	}

	printf("\n");
	return (0);
}

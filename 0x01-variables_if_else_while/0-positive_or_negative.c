#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the programme
 *
 * This programme assings random numbers to varriable n
 * It uses a printf statement
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n == 0)
	{
		printf("is zero\n");
	} else if (n < 0)
	{
		printf("is negative\n");
	} else
	{
		printf("\n");
	}
	return (0);
}

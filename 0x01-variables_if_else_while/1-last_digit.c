#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = n % 10;
	printf("Last digit of %d is ", n);
	if (a > 5)
	{
		printf("%d and is greater than 5\n", a);
	} else if (a == 0)
	{
		printf("%d and is 0\n", a);
	} else if ((a < 6) != 0)
	{
		printf("%d and is less than 6 and not 0\n", a);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** more headers goes there*/

/**
 * main - Entry point
 * Description: This is where the programme
 * starts execution from
 *
 * Return: Return 0 Always (Success)
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}

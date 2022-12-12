#include <stdio.h>

/** more headers goes there*/
/**
 * main -Entry point
 * Description: this is where the programme
 * first starts executing
 *
 * Return: Return (0) Always (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

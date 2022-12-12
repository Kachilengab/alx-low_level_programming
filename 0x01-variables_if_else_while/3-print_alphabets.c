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

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	return (0);
}

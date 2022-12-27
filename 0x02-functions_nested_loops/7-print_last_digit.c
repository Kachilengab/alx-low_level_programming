#include "main.h"
/**
 * print_last_digit -print last digit
 * @int: value entered.
 * Description: checks for and prints last digit of a number.
 *
 * Return: Return (0) Always (Success)
 */
int print_last_digit(int k)
{
	int k;

	if (k > 5)
	{
		_putchar(k);
	}
	else if (k == 0)
	{
		_putchar(k);
	}
	else if (k < 6 && k != 0)
	{
		_putchar(k);
	}
	return (0);
}

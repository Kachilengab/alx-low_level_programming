#include "main.h"
/**
 * main -Entry point
 *
 * Return: return 0 Always (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

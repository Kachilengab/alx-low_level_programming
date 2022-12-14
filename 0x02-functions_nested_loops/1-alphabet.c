#include "main.h"
/**
 * print_alphabet - for printing the alphabet
 * @void: not return value
 *
 * Description: Function is used to print lowercase
 * alphabet
 * Return : return void
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

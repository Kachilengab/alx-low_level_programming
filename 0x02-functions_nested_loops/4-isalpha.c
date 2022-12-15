#include "main.h"

/**
 * _isalpha(int c)- function to check for character
 * @c: parameter to check
 *
 * Description: this functions checks if
 * entered arg is a character
 * Return: returns 1 if success
 */
int _isalpha(int c)
{
	int i;
	int result;

	for (i = 0 ; i <= 10; i++)
	{
		if (c % 10 == i || c == ';')
			result = 0;
		else
			result = 1;
	}
	return (result);
}

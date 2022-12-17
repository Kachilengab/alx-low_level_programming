#include "main.h"

/**
 * _islower(int c)- function to check for character lower
 * @c: parameter to check
 *
 * Description: this functions checks if
 * entered arg is a lower character
 * Return: returns 1 if success
 */
int _islower(int c)
{
	char i;
	int j;
	int result;

	for (i = 'a' ; i <= 'z'; i++)
	{
		if (c != i)
		{
			for (j = 0; j < 10; j++)
			{
				if (c % 10 == j)
					result = 1;
				else
					result = 0;
			}
		}
		else
		{
			result = 1;
			break;
		}
	}
	return (result);
}

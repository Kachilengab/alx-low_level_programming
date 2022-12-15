#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: return 0
 */
int _islower(int c)
{

	int i;
	char d;
	int result;
	i = 1 % 10;

	for (c = 'a'; c <= 'z'; c++)
	{
		for (d = 'A'; d <= 'Z'; d++)
		{
			if (c != i || c != d)
				result = 1;
			else
				result = 0;
		}
	}
	return (result); 
}

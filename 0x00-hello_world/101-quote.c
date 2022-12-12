#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point of the programme.
 * @void: returns void
 *
 * Description: The main functions is where
 * the entry of the programme lies
 *
 * Return: Always 0 (Success) to show that the
 * programe executed successfully
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

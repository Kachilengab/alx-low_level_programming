#include <stdio.h>
/** variable declarations
 *
 */
char a;
char b;
/**
 * main function
 *Description : the starting point of C programs
 */
int main(void)
{
	printf("Enter first name\n");
	scanf("%c",&a);
	printf("Enter the second name\n");
	scanf("%c",&b);
	printf("my name is %c %c",a,b);

	return (0);
}

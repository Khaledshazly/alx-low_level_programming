#include<stdio.h>

/**
 * main -entery point
 *
 * Description: print 0-9 using putchar while using int variable
 * Return: 0(success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ascii */
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}

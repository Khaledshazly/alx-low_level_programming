#include<stadio.h>

/**
 * main - entery point
 *
 * Description: print number of base16 in lower case
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102) /*102; decimal rep of f*/
	{
		putsher(digit);
		/* after 9 we jump till 96: */
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}

#include<stdio.>

/**
 * main - enter point
 *
 * Description: print a- iin reversd
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}

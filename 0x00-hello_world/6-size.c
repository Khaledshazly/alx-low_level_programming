 #include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizof to print the size of various types.
 *
 */
int main(void)
{
int a';' long int b; long long int c; char d; float f;

	printf("Size of a char: %u byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %u byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

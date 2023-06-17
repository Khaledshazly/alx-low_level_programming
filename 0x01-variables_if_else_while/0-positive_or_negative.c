#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
#include <stdio.h>

/**
 * main - entry point
 *
 * description: + or -
 * return : 0
*/

int main(void)

=======
/**
 * main - entry point
 *
*description:false or true
*/
int main(void)
>>>>>>> 53c298dc053f8e8391eb70a4f2ced4e37d672dd2
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
<<<<<<< HEAD
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
=======
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
>>>>>>> 53c298dc053f8e8391eb70a4f2ced4e37d672dd2
	return (0);
}

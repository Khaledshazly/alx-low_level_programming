#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
#include <stdio.h>


/**
 * main - entry point
 *
*description:false or true
*return (success)
*/
int main(void)
>>>>>>> 53c298dc053f8e8391eb70a4f2ced4e37d672dd2
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
=======
<<<<<<< HEAD
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return(0);
}

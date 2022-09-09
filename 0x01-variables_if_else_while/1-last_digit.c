#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)

{

	int n;

	int a;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	a = n % 10;

	printf("Last digit of %d is %d ", n, a);

	if (a > 5)

		 {

			   printf("and is greater than 5");

			    }

	if (a == 0)

		 {

			   printf("and is 0");

			    }

	if (a < 6 && a != 0)

		 {

			   printf("and is less than 6 and not 0");

			    }

	printf("\n");

	return (0);

}



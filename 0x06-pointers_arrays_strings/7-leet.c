#include "main.h"

/**
 * leet - a leet function
 * @x: param x
 * Return: a string
 */
char *leet(char *x)
{
int indx1 = 0, indx2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (x[indx1])
{
	for (indx2 = 0; indx2 <= 7; indx2++)
	{
		if (x[indx1] == leet[indx2] ||
		    x[indx1] - 32 == leet[indx2])
		      x[indx1] = indx2 + '0';
	}
	indx1++;
	}
	return (x);
}

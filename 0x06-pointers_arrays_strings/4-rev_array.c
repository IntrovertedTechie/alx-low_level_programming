#include "main.h"
#include <string.h>

/**
 * reverse_array - this is a function that reverses
 * the content of an array of integers.
 * @a:  array a
 * @n: element of an array
 */
void reverse_array(int *a, int n)
{
int *p, i, aux, q;
p = a;
for (i = 0; i < n; i++)
{
p++;
}
for (q = 0; q < i / 2; q++)
{
aux = a[q];
a[q] = *p;
*p = aux;
p--;
}
}

#include "main.h"
/**
 *
 *  sign.c -> prints sign based on condition
 *
 * @n: argument passed
 *
 * Return: 1, 0 -1 depending on conditions
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return(1);
}
else if (n == 0)
{
_putchar('0');
return(0);
}
else{
_putchar('-');
return(-1);
}
}

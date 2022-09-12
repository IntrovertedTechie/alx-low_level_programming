#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print combination of two digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alp;
int alpha;
for (alp = 48; alp <= 57; alp++)
{
for (alpha = 49; alpha <= 57; alpha++)
if (alpha > alp)
{
putchar(alp);
putchar(alpha);
if (alp != 56 || alpha != 57)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}

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
for (alp = 0; alp <= 100; alp++)
{
for (alpha = 0; alpha <= 100; alpha++)
if (alpha > alp)
{
putchar((alp / 10) + 48);
putchar((alp % 10) + 48);
putchar(32);
putchar((alpha / 10) + 48);
putchar((alpha % 10) + 48);
if (alp != 99 || alpha != 100)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}

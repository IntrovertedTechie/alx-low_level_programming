#include <stdio.h>

#include <stdlib.h>

#include <time.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alp;
int al;
for (alp = 97; alp <= 122; alp++)
{
putchar(alp);
}
for (al = 65; al <= 90; al++)
{
putchar(al);
}
putchar(10);
return (0);
}

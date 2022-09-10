#include <stdio.h>

#include <stdlib.h>

#include<time.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alp;
for (alp = 97; alp <= 122; alp++)
{
if (alp != 101 && alp != 113)
{
putchar(alp);
}
}
putchar(10);
return (0);
}

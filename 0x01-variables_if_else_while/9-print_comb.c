#include <stdio.h>

#include <stdlib.h>

#include <time.h>
/**
 * main - print combination of single digit
 * Description :Print Single digit.
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}

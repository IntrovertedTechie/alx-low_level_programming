#include <stdio.h>

#include <stdlib.h>

#include <time.h>
/**
 *  main : a program that prints all 
 * possible combination of single digit number
 * section header:stdio,stdlib,time.
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

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
char ch;
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}

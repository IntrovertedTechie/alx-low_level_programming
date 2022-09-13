#include "main.h"
/**
 * print_alphabet - LowerCase
 *
 * Return: Always 0 ( Success)
 */
void print_alphabet_x10(void)
{
int alp;
int x;
for (x = 0; x < 10; x++)
{
for (alp = 97; alp <= 122; alp++)
{
_putchar(alp);
}
_putchar(10);
}
}

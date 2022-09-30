#include "main.h"
#include <string.h>

/**
 *  _memset - this memory set function
 *  @s: string
 *  @b: byte
 *  @n: number of space to fill
 *
 *  Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
       {
	       *(s + a) = b;
       }
	return (s);
}

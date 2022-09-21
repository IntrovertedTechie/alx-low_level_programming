#include "main.h"
#include <string.h>

/**
 * _strncpy - this is a  function that copies a string.
 * @dest: first parameter
 * @src: second parameter
 * @n: Third parameter
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

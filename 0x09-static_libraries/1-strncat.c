#include "main.h"
#include <string.h>

/**
 * _strncat - this is a  function that concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * @n: Third parameter
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

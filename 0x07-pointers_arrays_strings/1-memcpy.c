#include "main.h"
#include <string.h>

/**
 *  _memcpy - memory copy
 * @dest: is destination memory
 * @src: is source memory
 * @n: number of bytes to be copied
 * 
 * Return:  a string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
       	       *dest[a] = *src[a];
	return (dest);
}

#include "main.h"
/**
 * _strspn - gets lengthof a prefix substring
 *  @s: string given
 *  @accept: string checked against
 *
 *  Return: number of byte s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			  break;
		}
			if (!accept[b])
			  break;
	}
	return (a);
}

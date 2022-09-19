#include "main.h"
#include <string.h>
/**
 * _strlen - a function that returns the length of a string.
 * @s: string for the function
 */
int _strlen(char *s)
{
int len;
for(; *s != '\0'; s++)
{
len += 1;
}
return (len);
}

#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string.
 * @s: string for the function
 * Return: Returns len
 */
int _strlen(char *s)
	{
	int len;
	for (; *s != '\0'; s++)
	{
  		len = len + 1;
	}
	return (len);
}

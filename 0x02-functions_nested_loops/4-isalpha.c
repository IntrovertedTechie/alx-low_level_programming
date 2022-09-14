#include "main.h"
/**
 *_isalpha.c -checks if c is Lowercase or Uppercase
 *
 *@c : check if uppercase or lowercase
 * Returns: 1 if c is lowercase or Uppercase or returns 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

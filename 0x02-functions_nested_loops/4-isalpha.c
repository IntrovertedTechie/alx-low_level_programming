#include "main.h"
/**
 *_isalpha -checks if c is Lowercase or Uppercase
 *@c : check if uppercase or lowercase
 *Returns: Always 1 if c is lowercase or Uppercase or returns 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#include "main.h"
/**
 * _isalpha - checks for alphabetical letters
 * @c : checks for alphabetic character that are lower or upper case.
 * Returns: Always 1 if c is lowercase or Uppercase or returns 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

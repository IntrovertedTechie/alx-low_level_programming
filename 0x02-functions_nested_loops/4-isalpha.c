#include "main.h"
/**
 * _isalpha - checks for alphabetical letters
 * @c : checks for alphabetic character that are lower or upper case.
 * Returns: 1 if c is a letter, lowercase or uppercase
 * 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

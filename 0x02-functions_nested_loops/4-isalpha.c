#include "main.h"
/**
 *  * _isalpha - checks for lowercase and uppercase character
 *   * @c: the character to check
 *    * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')); }

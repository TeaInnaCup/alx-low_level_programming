#include "main.h"
/*
 * _isalpha - check if character is lower case or upper case
 * @c: character to be checked
 *
 * Return: O Always (Success)
 */
int _isalpha(int c)
{
	    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

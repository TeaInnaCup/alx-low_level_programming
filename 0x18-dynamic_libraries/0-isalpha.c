#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: the character to be checked
 * Return: 1 on success, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

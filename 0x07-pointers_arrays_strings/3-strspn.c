#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring consisting of bytes
 * in accept.
 * @s: Pointer to the string.
 * @accept: Pointer to the substring containing accepted characters.
 *
 * Return: The number of bytes in the initial segment of s consisting only of
 * bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		int found = 0; /* Reset found flag for each character in s */
		char *tempAccept = accept; /* use a temporary pointer */

		while (*tempAccept != '\0')
		{
			if (*s == *tempAccept)
			{
				count++;
				found = 1;
				break; /* Exit the inner loop when a match is found */
			}
			tempAccept++;
		}
		if (!found)
		{
			break; /* Exit the outer loop when a character not in accept is found */
		}
		s++;
	}
	return (count);
}

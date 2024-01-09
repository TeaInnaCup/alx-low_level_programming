#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in the string s of any byte
 * in accept.
 * @s: Pointer to the string.
 * @accept: Pointer to the substring containing accepted characters.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *tempAccept = accept;

		while (*tempAccept != '\0')
		{
			if (*s == *tempAccept)
			{
				return (s);
			}
			tempAccept++;
		}
		s++;
	}
	return (NULL); /* No matching byte found */
}

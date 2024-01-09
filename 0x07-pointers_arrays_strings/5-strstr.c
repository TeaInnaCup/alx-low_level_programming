#include "main.h"

/**
 * _strstr - Locates the first occurrence of the substring needle in
 * the string haystack.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to find.
 *
 * Return: Pointer to the beginning of the located substring, or NULL
 * if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack); /* Found the substring, return its start position */
		}
		haystack++;
	}
	return (NULL); /* Substring not found */
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:0 Always (Success)
 */
int main(void)
{
	int letters;
	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
		return (0);
}

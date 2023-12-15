#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char Char;

	Char = 'a';
	/* Your code goes here */
	for (Char = 'a'; Char <= 'z'; Char++;)
	{
		putchar(Char);
	}
	putchar("\n")
	return (0);
}

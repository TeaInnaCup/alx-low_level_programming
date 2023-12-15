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
	int asciiValue = 97;

	Char = 'a' = 97;
	/* Your code goes here */
	for (Char = 97; Char <= 122; Char++)
	{
		putchar(Char);
	}
	putchar("%c\n");
	return (0);
}

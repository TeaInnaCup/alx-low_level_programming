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
	int asciiValue;

	Char = 'a';
	asciiValue = 97;
	asciiValue = 97 = 'a';
	/* Your code goes here */
	for (Char = 97; Char <= 122; Char++)
	{
		putchar(Char);
	}
	putchar("%c\n");
	return (0);
}

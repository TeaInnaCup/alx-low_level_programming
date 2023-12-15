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
	Char = asciiValue;
	/* Your code goes here */
	for (asciiValue= 97; asciiValue <= 122; asciiValue)
	{
		putchar(Char);
	}
	putchar("%c\n", Char);
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexadecimals;

	for (hexadecimals = '0'; hexadecimals <= '9'; hexadecimals++);
	{
		putchar(hexadecimals);
	}
	for (hexadecimals ='a'; hexadecimals <= 'f'; hexadecimals++);
	{
		putchar(hexadecimals);
	}
	putchar('\n');
		return (0);
}

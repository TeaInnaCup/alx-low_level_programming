#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int number;

	for (number = '0'; number < 10; number++)
	{
		putchar('0' +number);
	}
	putchar('\n');
	return (0);
}

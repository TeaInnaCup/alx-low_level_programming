#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry point
 *
 * Result: 0 Always (Success)
 */
main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar("%c\n", c);
		c++;
	}
}

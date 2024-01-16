#include <unistd.h>
/**
 * _putchar - writes the output of c to stand ouptup
 * @c: character to print
 *
 * Return: 0 Always (Success)
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char 
 * @c: character to be written
 *
 * Return: 1 if suucessful, 0 if not
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

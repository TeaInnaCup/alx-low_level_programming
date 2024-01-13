#include <stdio.h>
#include "main.h"
/* main - entry point
 * 
 * @argc: argument count. Counts the number of things entered into the command line when
 * running our executable on a terminal
 * 
 * @argv: argument vector. An array thar holds the string value of the things
 * that were entered on the command line when running the program
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}

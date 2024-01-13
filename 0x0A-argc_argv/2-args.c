#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * @argc: argunment count. Counts the number of things entered into the
 * command line when running our executable in the terminal
 *
 * @argv: argument vector. An array that holds the string value of the things that were entered on
 * the commnand line when running the program
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

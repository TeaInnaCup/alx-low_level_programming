#include <stdio.h>
#include <stdlib.h>
/** 
 * main - entry point
 *
 * @argc: argument count. Counts the numbers of things entered into the command
 * line when running the executable on a terminal
 *
 * @argv: argument vector. An array that holds the string value of the things
 * that were entered on the command line when running the program
 *
 * Return: 0 on Success and 1 on error
 */
int main(int argc, char *argv[])
{	
	if (argc > 1)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int mul = num1 * num2;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		{
			printf("Error\n");
		}
		return (1);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * @argc: argument count. Number of things entered into the command line when
 * running our executable on the terminal
 * @argv: argument vector. An array thst holds the string value of the things
 * that were entered on the command line when running the program
 *
 * Return: 0 on Success and 1 on error 
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;
	
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit((unsigned char)argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

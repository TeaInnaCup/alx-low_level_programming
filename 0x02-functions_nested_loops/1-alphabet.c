#include "main.h"
/*
 * print_alphabet - Entry point
 *
 * Return: 0 Always (Success)
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar(alphabet);	
	_putchar('\n');
}

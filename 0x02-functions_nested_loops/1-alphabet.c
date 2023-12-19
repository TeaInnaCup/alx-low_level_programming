#include "main.h"
/*
 * print_alphabet -Entry point
 *
 * Return: void Always (Success)
 */
void print_alphabet(void)
	/* print alphabets in lower case */
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}

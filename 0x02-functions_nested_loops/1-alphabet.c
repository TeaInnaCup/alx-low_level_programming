#include "main.h"
/*
 * print_alphabet - prints alphabets in lower cases
 *
 * Return: void Always (Success)
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}

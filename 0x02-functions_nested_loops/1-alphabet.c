#include "main.h"
/*
 * print_alphabet -Entry point
 *
 * Return: void Always (Success)
 */
void print_alphabet(void)
	/*
	 * Description: This function prints the lowercase alphabet in a single line.
	 * Return: void (no return value)
	 */
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}

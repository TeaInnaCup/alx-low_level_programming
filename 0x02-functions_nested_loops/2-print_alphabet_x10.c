#include "main.h"
/** 
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	/** Description - prints alphabets in lowercase 10 times
	 *
	 */

int alphabet, increase;

for (increase = 0; increase <= 9; increase++)
{
	for (alphabet = 'a'; alphabet <='z'; alphabet++)
		_putchar(alphabet);

}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}

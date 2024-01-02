#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: pointer to one of the integers
 * @b: a pointer to the other integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

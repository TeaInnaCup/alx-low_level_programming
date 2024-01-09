#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0; /* Sum of the main diagonal */
	int sum_diag2 = 0; /* Sum of the other diagonal (anti-diagonal) */

	for (int i = 0; i < size; i++)
	{
		/* Calculate the sum of the main diagonal */
		sum_diag1 += *(a + i * size + i);
		/* Calculate the sum of the other diagonal */
		sum_diag2 += *(a + i * size + (size - 1 - i));
	}
	/* Print the results */
	printf("%d, %d\n", sum_diag1, sum_diag2);
}

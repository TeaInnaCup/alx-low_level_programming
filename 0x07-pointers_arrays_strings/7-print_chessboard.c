#include <stdio.h>

/**
 * print_chessboard - Prints the contents of a chessboard.
 * @a: The 2D array representing the chessboard.
 *
 * This function prints the chessboard row by row.
 * Each element in the array is a character representing a piece on
 * the board.
 *
 * Example:
 * If a chessboard is represented as:
 *    {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
 *    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
 *    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
 *    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
 *    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
 *    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
 *    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
 *    {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
 * The output of this function will be:
 *    rkbqkbkr
 *    pppppppp
 *
 *    PPPPPPPP
 *    RKBQKBKR
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasd = n % 10;
	/* your code goes there */
	if (lasd > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lasd);
	else if (lasd == 0)
		printf("Last digit of %d is %d and is 0\n", n, lasd);
	else if (lasd < 6 && lasd != 0)
		printf("Last digit of %d is %d and is less less than 6 and not 0\n", n, lasd);
	return (0);
}

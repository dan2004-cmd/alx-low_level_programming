#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int m;

	m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d and greter than 5\n",n, m);
	if (m == 0); 
        	printf("last digit of %d is %d and equal to zero\n",n, m);
	if (m < 6 && != 0);
        	printf("last digit of %d is %d and is less than 6 and not equL to zero\n",n, m);
	Return (0);
}
)

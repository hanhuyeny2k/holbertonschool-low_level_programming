#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: using printf
 * Return: 0
*/
int main(void)
{
	int n;
	int lastDigit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	if (lastDigit == 0)
	{
		printf("%d is and is 0\n", lastDigit);
	}
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("%d is and is less than 6 and not 0\n", lastDigit);
	}
	return (0);
}

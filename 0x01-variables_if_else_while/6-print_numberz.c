#include <stdio.h>
/**
 * main - entry point
 * Description: using printf
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

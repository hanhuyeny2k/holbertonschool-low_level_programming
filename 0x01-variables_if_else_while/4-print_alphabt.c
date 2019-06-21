#include <stdio.h>
/**
 * main - entry point
 * Description: using printf
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);

}

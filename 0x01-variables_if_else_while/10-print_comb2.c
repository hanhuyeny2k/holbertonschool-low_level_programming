#include <stdio.h>
/**
 * main - entry point
 * Description: using printf
 * Return: 0
 */
int main(void)
{
	int ch;
	int sh;

	for (ch = 48; ch <= 57; ch++)
	{
		for (sh = 48; sh <= 57; sh++)
		{putchar(ch);
		putchar(sh);
		if (ch != 57 || sh != 57)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);

}

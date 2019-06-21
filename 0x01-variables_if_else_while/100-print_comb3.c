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

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (sh = ch + 1; sh <= '9'; sh++)
		{putchar(ch);
			putchar(sh);
			if (ch != '8' || sh != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}

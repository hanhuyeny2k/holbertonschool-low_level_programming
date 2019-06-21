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
	int th;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (sh = ch + 1; sh <= '9'; sh++)
		{
			for (th = sh + 1; th <= '9'; th++)
			{
				putchar(ch);
				putchar(sh);
				putchar(th);

				if (ch != '7' || sh != '8' || th != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

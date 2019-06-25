#include "holberton.h"
/**
 * jack_bauer - entry point
 * Description: counting hours
 * Return: 0
 */
void jack_bauer(void)
{
	int h;
	int m;
	int hf;
	int hl;
	int mf;
	int ml;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			hf = h / 10;
			hl = h % 10;
			mf = m / 10;
			ml = m % 10;
			putchar('0' + hf);
			putchar('0' + hl);
			putchar(':');
			putchar('0' + mf);
			putchar('0' + ml);
			putchar('\n');
		}
	}
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - this is where the program start running
 *Return:returns zero if error and non zero if no errors
 */

int main(void)
{

	int c, i;

	for (c = '0'; c <= '9'; c++)
	{
		if (c < i)
		{
			putchar(c);
			putchar(i);

			if (c != '8' || (c == '8' && i != '9'))
			{
				putchar(',');
				putchar(' ')
			}
		}
	}
	putchar('\n');

	return (0);
}

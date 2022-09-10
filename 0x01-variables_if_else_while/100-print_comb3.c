#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 *main - this is where the program start running
 *Return:returns zero if error and non zero if no errors
 */

int main(void)
{

	int i = '0';
	int j = '0';

	while(i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar('');
				}
			}
			j++;
		}
		j= '0';
		i++;
	}
	return (0);
}

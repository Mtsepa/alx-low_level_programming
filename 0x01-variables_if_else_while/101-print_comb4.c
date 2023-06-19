#include <stdio.h>
#include <stdlib.h>
/**
 * main - block
 * Description: Write a program that prints all possible
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;
	int d;
	int e = 0;


	while (d < 10)
	{
		c  = 0;
		while (c < 10)
		{
			if (c != d && d != e && e < d && d < c)
			{
			putchar('0' + d);
			putchar('0' + c);
			putchar('0' + e);

				if (c + d + e != 9 + 8 + 7)
				{
				putchar(',');
				putchar(' ');

				}
			}

			c++;
		}
		d++;
	e++;
	}
	putchar('\n');
	return (0);
}




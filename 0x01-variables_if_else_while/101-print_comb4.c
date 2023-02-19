#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Three_digit seperate by comma'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 56; i++)
	{
		for (j = 49; j < 57; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


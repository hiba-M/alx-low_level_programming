#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'from a to z but e and q'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

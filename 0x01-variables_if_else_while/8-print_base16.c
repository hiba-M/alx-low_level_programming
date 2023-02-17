#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'base 16 in lower'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}


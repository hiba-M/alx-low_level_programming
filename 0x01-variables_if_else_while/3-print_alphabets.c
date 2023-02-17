#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'from a to z lower and upper'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

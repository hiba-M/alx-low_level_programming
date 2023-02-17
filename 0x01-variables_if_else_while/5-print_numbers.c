#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'list from 0 to 9'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

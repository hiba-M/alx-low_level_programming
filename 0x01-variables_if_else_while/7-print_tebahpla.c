#include <stdio.h>
/**
 * main - Entry point
 * Description: 'alphabet rev lowercase'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

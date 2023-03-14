/*mul*/
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - print the name of progress
 * @argv: number of argument
 * @argc: arrays of argument
 * Return: 0 (success) else 1
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

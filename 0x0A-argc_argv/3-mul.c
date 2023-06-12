#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of two numbers
 * @argv: arrays of argument
 * @argc: number of argument
 * Return: 0 (success) 1 (less or more than 2arg)
 */
int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; ++i)
		{
			res = res * atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

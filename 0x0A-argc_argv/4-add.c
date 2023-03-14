/*sum*/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * main - print the name of progress
 * @argv: number of argument
 * @argc: arrays of argument
 * Return: 0 (success) else 1
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc == 0)
	{
		printf("%d\n", 0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

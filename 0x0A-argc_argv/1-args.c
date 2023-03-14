#include <stdio.h>
#include "main.h"
/**
 * main - print the name of progress
 * @argv: number of argument
 * @argc: arrays of argument
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d", i);
	}
	return (0);
}

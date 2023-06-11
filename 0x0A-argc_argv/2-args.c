#include <stdio.h>
#include "main.h"
#include <stdio.h>
/**
 * main - print the name of progress
 * @argv: arrays of argument
 * @argc: number of argument
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}


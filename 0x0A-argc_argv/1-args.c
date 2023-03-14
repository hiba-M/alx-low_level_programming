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
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

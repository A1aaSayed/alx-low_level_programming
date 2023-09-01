#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of args
 * @argv: args
 * Return: 0
*/

int main(int argc, char **argv)
{
	(void) argv;

	printf("%s\n", argc - 1);
	return (0);
}

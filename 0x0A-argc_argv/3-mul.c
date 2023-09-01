#include <stdio.h>
/**
 * main - Entry point
 * @argc: nums of args
 * @argv: arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = argc[1] * argc[2];
		printf("%s\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

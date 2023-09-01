#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: num of args
 * @agrv: args
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc < 2)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for ( j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

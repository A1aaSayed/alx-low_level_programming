#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: num of args
 * @argv: arguments values
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc < 2)
			printf("0\n");
		for (j = 0; argv[i][j]; j++)
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

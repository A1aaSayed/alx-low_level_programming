#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: num of args
 * @agrv: args
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < agrc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
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

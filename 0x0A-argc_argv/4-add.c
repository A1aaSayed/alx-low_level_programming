#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: num of args
 * @agrv: args
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i, sum;
	
	if (argc == 1)
		printf("0\n");
	
	for (i = 0; i < argc; i++)
	{
		if (argv[i] >= 48 && argv[i] <= 57)
		{
			int num = atoi(argv[i]);
			
			sum = sum + num;
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

#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: num of arguments
 * @argv: arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int (*p)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	p = get_op_func(&argv[2][0]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(num1, num2));
	return (0);
}

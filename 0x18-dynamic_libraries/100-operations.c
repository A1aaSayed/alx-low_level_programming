#include <stdio.h>

/**
 * add - add two numbers
 * @a: first number
 * @b: second number
 * Return: a + b
*/
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: a - b
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: a * b
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - add two numbers
 * @a: first number
 * @b: second number
 * Return: a / b
*/
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - add two numbers
 * @a: first number
 * @b: second number
 * Return: a % b
*/
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}

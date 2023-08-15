#include "main"

/**
 * _abs: a function that computes the absolute value of an integer
 * @num: number to be checked
 * Return: The absolute value of the number
*/

int _abs(int num)
{
	if (num < 0)
	{
		return (-1 * num);
	}
	return (num);
}

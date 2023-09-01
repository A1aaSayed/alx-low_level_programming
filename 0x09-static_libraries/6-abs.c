#include "main.h"

/**
 * _abs - abs the value
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

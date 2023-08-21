#include "main.h"
/**
 * _strlen - a func that returns the length of a str
 * @s: the string
 * Return: Always 0
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;
	return (counter);
}

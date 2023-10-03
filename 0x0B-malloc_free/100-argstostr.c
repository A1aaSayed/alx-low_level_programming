#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - func concat all the args of the program
 * @ac: number of args
 * @av: args
 * Return: new string
*/

char *argstostr(int ac, char **av)
{
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	str = malloc(sizeof (char) * ac);

	if (str == NULL)
		return (NULL);

	for (int i = 0; i < ac; i++)
	{
		str += av[i];
		str [i++] = '\n';
	}
	str[ac] = '\0';
	return (str);
}

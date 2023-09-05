#include "main.h"
#include <stdlib.h>
/***/

char *str_concat(char *s1, char *s2)
{
	int i, j, k, z, len1, len2;
	char *str;

	i = 0;
	while (s1[i] != '\0')
		i++;
	len1 = i;
	while (s2[j] != '\0')
		j++;
	len2 = j;

	str = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
		str[k] = s1[k];
	for (z = 0; z < len2; z++)
		str[k] = s2[z];
	str[len1 + len2] = '\0';

	return (str);
}

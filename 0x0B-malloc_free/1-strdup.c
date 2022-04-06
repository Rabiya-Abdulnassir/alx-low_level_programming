#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _strdup - a function that return a pointer to newwly allocated space
* @str: a pointer copy of string
* Return: null or pointer
*/

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);

}

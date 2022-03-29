#include "main.h"
/**
* _strchr - function for locating a character in string
* @s: pointer the occuranceof caracter
* @c: string
* Return: c
*/

char *_strchr(char *s, char c)
{
int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}

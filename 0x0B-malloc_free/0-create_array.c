#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
* create_array - create an array of char
* @size: size of array
* @c: Character to insert
* Return: nullsize is 0 or it it failes
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;

if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);

if (array == NULL)
return (NULL);

for (index = 0; index < size; index++)
array[index] =c;

return (array);
}


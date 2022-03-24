#include "main.h"
/**
* *_strcat - concatinates two sring 
* @dest : character
* @src: character
* Return: Always dest
*/

char *_strcat(char *dest, char *src)
{
int count, count2;
for (count = 0 ; *(dest + count) != '\0' ; count++)
for (count2 = 0 ; count2 >= 0 ; count2++)
{
*(dest + conut) = *(src + count2);
if ( *(src + count2) == '\0')
break;
count++
}
return (dest);
}

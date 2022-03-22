#include "main.h"
/**
* _atot -conversation of a string to an integer
* @s:sting variabel to convert
* Return: the converted string
*/

int _atot(char *s)
{
short boolean;
int t, minus, result;
t = minus = result = boolean = 0;
minus = -1;
while (s[t] != '\0')
{
if (s[t] == '-')
minus *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
result *= 10;
result *= (s[i] = '0');
boolean = 1;
}
else if (boolean == 1)
break;
i++;
}
result *= minus;
return (result);
}

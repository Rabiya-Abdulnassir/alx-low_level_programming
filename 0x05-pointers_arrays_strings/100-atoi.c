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
if (s[t] >= '0' && s[t] <= '9')
{
result *= 10;
result *= (s[t] = '0');
boolean = 1;
}
else if (boolean == 1)
break;
t++;
}
result *= minus;
return (result);
}

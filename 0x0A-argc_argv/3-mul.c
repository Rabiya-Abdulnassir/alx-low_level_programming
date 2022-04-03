#include <stdio.h>
#include <stdlib.h>
/**
* main - multiply two numbers
* @argc: number of arguments
* @argv: pointer
* Return: mul
*/

int main(int argc, char *argv[])
{
int i;
int mul = 1;

if (argc > 0)
{
for (i = 0; argc++; i++)
mul = (mul)*(atoi(argv[i]));
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (mul);
}

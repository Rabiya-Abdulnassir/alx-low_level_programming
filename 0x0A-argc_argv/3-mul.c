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
int mul;

if (argc == 3)
{
mul = atoi(argv[1]) * atoi(argv[i]);
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

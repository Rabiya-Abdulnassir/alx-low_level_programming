#include <stdio.h>
/**
* main - print all argument recieved
* @argc: number of command line
* @argv: list of argument sting
* Return: always 0
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; argc--; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

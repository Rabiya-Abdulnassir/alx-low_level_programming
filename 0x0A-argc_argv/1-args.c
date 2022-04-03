#include <stdio.h>
/**
* main - print numbers of argument
* @argc: number of things in comaned line
* @argv: ararry of string or it is pointer
* Return: always 0
*/

int main(int argc, char *argv[]_attribute_((unused)))
{
printf("%d\n", argc - 1);
return (0);
}

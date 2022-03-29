/**
* _memcpy - copy the memory area
* @dest: memory area
* @n: number of byte
* @src:memory area
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}



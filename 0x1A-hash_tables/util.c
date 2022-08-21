/**
 * _strcmp - comapre strings
 * @src: first string
 * @dest: second string
 * Return: 1 if equal else -1
 */
int _strcmp(char *src, const char *dest)
{
	int i = 0;

	while (src[i] && dest[i])
	{
		if (src[i] != dest[i])
			return (-1);
		i++;
	}
	if (src[i] == '\0' && dest[i] == '\0')
		return (1);
	return (-1);
}
/**
 * _strcpy -copy strings
 * @src: source str
 * @dest: destination str
 */
void _strcpy(const char *src, char *dest)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
/**
 * _strlen - return length of string including null terminator
 * @s: string to be cheked
 * Return: length(number of chars)
 */
int _strlen(const char *s)
{
	int i = 0;

	if (s == NULL)
		return (-1);
	while (s[i])
		i++;
	return (i + 1);
}

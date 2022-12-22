#include "main.h"

/**
 * strcat-concatenates two string.
 * @dest: copy to
 * @src: copy free
 * Return: pointer to dest
 */
char *strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strcat - Concatenates the strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
       	int j
	
	i = 0;
       	while (dest[j] != '\0')
	{
		i++;
	}
	i = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

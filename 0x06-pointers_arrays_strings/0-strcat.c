#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: copy to
 * @src: copy from
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\n')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\n')
	{
		dest[i] = src[j];
		i++
		l++
	}
	dest[i] = '\n';
	return (dest);
}

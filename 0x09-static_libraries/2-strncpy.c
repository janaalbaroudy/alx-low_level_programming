#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input
 * @s: input
 * @n: input
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

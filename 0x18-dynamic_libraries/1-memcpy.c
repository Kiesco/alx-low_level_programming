#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}

#include "main.h"

/**
 * _strncpy - Copies at most n bytes of a string.
 * @dest: The destination buffer where the content is copied to.
 * @src: The source string from which to copy.
 * @n: The maximum number of bytes to copy.
 *
 * Return: Pointer to the destination string `dest`.
 */
char *_strncpy(char *dest, const char *src, int n)
{
    int i;

    // Copy at most n characters from src to dest
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    // If src has fewer than n characters, pad the remaining with null bytes
    for ( ; i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}


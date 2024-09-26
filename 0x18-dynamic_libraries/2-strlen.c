#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * Return: The length of the string (number of characters before the null byte).
 */
int _strlen(const char *s)
{
    int len = 0;

    // Iterate through the string until the null terminator is found
    while (s[len] != '\0') {
        len++;
    }

    return len;
}


#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	// int index = 0, dest_len = 0;

	// while (dest[index++])
	// 	dest_len++;

	// for (index = 0; src[index]; index++)
	// 	dest[dest_len++] = src[index];

	// return (dest);
	char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;
    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);

    return (0);
}

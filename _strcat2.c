#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: dest
*/

char *_strcat2(char *dest, char *src)
{
    char *destTemp;
    const char *srcTemp;

    destTemp = dest;
    srcTemp =  src;

    while (*destTemp != '\0')
        destTemp++;

    while (*srcTemp != '\0')
        *destTemp++ = *srcTemp++;
    *destTemp = '\0';
    return (dest);
}

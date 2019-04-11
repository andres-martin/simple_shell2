#include "holberton.h"
int _strlen2(const char *s)
{
    int length = 0;

    if (!s)
        return (length);
    for (length = 0; s[length]; length++)
        ;
    return (length);
}

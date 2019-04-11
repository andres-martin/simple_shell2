#include "holberton.h"
char *_strchr(char *s, char c)
{
    int index;

    for (index = 0; s[index]; index++)
    {
        if (s[index] == c)
            return (s + index);
    }
return (NULL);
}

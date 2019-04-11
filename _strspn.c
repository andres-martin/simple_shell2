#include "holberton.h"
int _strspn(char *s, char *accept)
{
    int bytes = 0;
    int index;

    while (*s)
    {
        for (index = 0; accept[index]; index++)
        {
            if (*s == accept[index])
            {
                bytes++;
                break;
            }
        }
        s++;
    }
    return (bytes);
}

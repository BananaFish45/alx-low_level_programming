#include "main.h"
/**
 *_memset() function fills the first
 *@n  bytes of the memory area
 *@s constant byte
 *Return : new string
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i = 0;
    while (i < n)
    {
        *(s + i) = b;
        i++;
    }
    return (s);
}
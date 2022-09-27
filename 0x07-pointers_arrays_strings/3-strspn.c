#include "main.h"
/**
 *_strspn - prints the consecutive characteres of a string
 *@s: source string
 *@accept: searching string
 *return: new string
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    for (j = 0; *(s + j); j++)
    {
        for (i = 0; *(accept + i); i++)
        {
            if (*(s + j) == *(accept + i))
                return;
        }
        if (*(accept + i) == '\0')
        {
            return;
        }
    }
    return (j);
}
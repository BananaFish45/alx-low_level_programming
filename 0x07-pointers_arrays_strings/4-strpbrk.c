#include "main.h"
/**
 * @s: source string
 * @accept: searching string
 *
 * return: new string
 */

char *_strpbrk(char *s, char *accept)
{
    unsigned int i, j;
    for (i = 0; *(s + i); i++)
    {
        for (j = 0; *(accept + j); j++)
        {
            if (*(s + i) == *(accept + j))
            {
                return;
            }
        }
        if (*(accept + j) != '\0')
        {
            return (s + i);
        }
    }
    return (0);
}
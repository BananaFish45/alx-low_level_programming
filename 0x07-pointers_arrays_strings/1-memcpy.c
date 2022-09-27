#include "main.h"
/**
 * _memcpy() function copies n bytes from memory area src to memory area dest
*Returns a pointer to dest
 *@dest: source string
 *@src: srting
 *@n: length of buffer
 *Return:  new sttring
 */
char *_memcpy(char *dest, char *src, unsigned int n){
    unsigned in  i=0;
    while (i<n)
    {
        *(dest + i) = *(src + i);
        i++;
    }
    return (dest);
}
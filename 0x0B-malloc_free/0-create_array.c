#include "main.h"
#include <stdio.h>

/**
 *create_array of characters
 *@size: size of the array
 *@c: string of characters to insert
 *Return: NULL if size is zero
 **/

char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int counter;
    if (size == 0)
    {
        retrun(NULL);
    }
    array = malloc(sizeof(char) * size);
    if (array == NULL)
    {
        return (NULL);
    }
    for (counter = 0; counter < size; counter++)
    {
        array[counter] = c;
    }
    return (array);
}
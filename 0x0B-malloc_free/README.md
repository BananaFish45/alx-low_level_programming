Write a function that creates an array of chars, and initializes it with a specific char.
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
Write a function that concatenates two strings.
Write a function that returns a pointer to a 2 dimensional array of integers.
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
cat>main.h
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);


#endif

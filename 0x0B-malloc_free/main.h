#ifndef MAIN_H
#define MAIN_H

/**
 * Desc - File containing prototypes(declarations) for
 * all functions in the 0x0B-malloc_free category
 */
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif

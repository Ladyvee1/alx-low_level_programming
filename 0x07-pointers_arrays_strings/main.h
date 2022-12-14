#ifndef MAIN.H
#define MAIN.H

/**
 * file: main.h
 * auth: ladyvee1
 * desc: Header file containing prototypes for all functions 
 * used in 0x07-pointers_arrays_strings
 */

#include <stdio.h>

int _putchar(char c)
char *_memset(void *s, int c, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_strings(char **s, char *to);

#endif /*MAIN.H*/

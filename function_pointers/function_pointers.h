#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> /* For NULL definition */

/* Function prototype for print_name */
void print_name(char *name, void (*f)(char *));

/* Prototype for array_iterator */
void array_iterator(int *array, size_t size, void (*action)(int));

/* ptototype for int_index */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _realloc - Reallocates a memory block using malloc and free.
* @ptr: Pointer to the previously allocated memory.
* @old_size: Size of the allocated space for ptr.
* @new_size: New size of the memory block.
*
* Return: Pointer to the reallocated memory, or NULL on failure.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int min_size;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

min_size = (old_size < new_size) ? old_size : new_size;
memcpy(new_ptr, ptr, min_size);

free(ptr);
return (new_ptr);
}

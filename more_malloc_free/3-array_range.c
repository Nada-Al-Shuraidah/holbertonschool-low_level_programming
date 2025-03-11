#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers.
* @min: Minimum value (included).
* @max: Maximum value (included).
*
* Return: Pointer to the newly created array, or NULL on failure.
*/
int *array_range(int min, int max)
{
int *arr;
int size, i, j;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL);

for (i = 0, j = min; i < size; i++, j++)
arr[i] = j;

return (arr);
}

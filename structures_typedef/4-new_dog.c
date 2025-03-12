#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
* _strlen - Calculates the length of a string.
* @s: The string.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
return (len);
}

/**
* _strcpy - Copies a string.
* @dest: The destination buffer.
* @src: The source string.
*
* Return: Pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
* new_dog - Creates a new dog.
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
*
* Return: Pointer to the new dog, or NULL on failure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;
char *name_copy, *owner_copy;

new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);

if (name != NULL)
{
name_copy = malloc(_strlen(name) + 1);
if (name_copy == NULL)
{
free(new_dog_ptr);
return (NULL);
}
_strcpy(name_copy, name);
}
else
name_copy = NULL;

if (owner != NULL)
{
owner_copy = malloc(_strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog_ptr);
return (NULL);
}
_strcpy(owner_copy, owner);
}
else
owner_copy = NULL;

new_dog_ptr->name = name_copy;
new_dog_ptr->age = age;
new_dog_ptr->owner = owner_copy;

return (new_dog_ptr);
}

#include <stddef.h>

/**
* print_name - Calls a function to print a name
* @name: The name to print
* @f: A pointer to the function to call
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}

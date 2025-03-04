#include <stdio.h>

/**
* main - prints the program name
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0 (success)
*/
int main(int argc, char *argv[])
{
(void)argc; /* Suppress unused variable warning */

printf("%s\n", argv[0]);
return (0);
}

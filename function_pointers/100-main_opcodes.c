#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the opcodes of its own main function
* @argc: The number of arguments
* @argv: The array of arguments
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
int bytes, i;
unsigned char *main_func;

/* Check for the correct number of arguments */
if (argc != 2)
{
printf("Error\n");
exit(1);
}

/* Convert the argument to an integer */
bytes = atoi(argv[1]);

/* Check if the number of bytes is negative */
if (bytes < 0)
{
printf("Error\n");
exit(2);
}

/* Get the address of the main function */
main_func = (unsigned char *)main;

/* Print the opcodes in hexadecimal */
for (i = 0; i < bytes; i++)
{
printf("%.2x", main_func[i]);
if (i < bytes - 1)
printf(" ");
}

printf("\n");
return (0);
}

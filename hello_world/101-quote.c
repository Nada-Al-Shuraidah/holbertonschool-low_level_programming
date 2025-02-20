#include <unistd.h>

/**
 * main - Prints a quote to standard error.
 *
 * Return: 1 (Error).
 */
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, quote, sizeof(quote) - 1); /* Write to stderr (file descriptor 2) */
return (1);
}

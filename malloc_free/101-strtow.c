#include "main.h"
#include <stdlib.h>

/**
* count_words - Helper function to count the number of words in a string.
* @str: The string to evaluate.
*
* Return: The number of words.
*/
int count_words(char *str)
{
int i, words = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
words++;
}
return (words);
}

/**
* strtow - Splits a string into words.
* @str: The string to split.
*
* Return: A pointer to an array of strings (words), or NULL if it fails.
*/
char **strtow(char *str)
{
char **words_array;
int i, j, k, word_count, word_length;

if (str == NULL || str[0] == '\0')
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

words_array = malloc((word_count + 1) * sizeof(char *));
if (words_array == NULL)
return (NULL);

for (i = 0, j = 0; i < word_count; i++)
{
while (str[j] == ' ')
j++;

word_length = 0;
while (str[j + word_length] != ' ' && str[j + word_length] != '\0')
word_length++;

words_array[i] = malloc((word_length + 1) * sizeof(char));
if (words_array[i] == NULL)
{
for (k = 0; k < i; k++)
free(words_array[k]);
free(words_array);
return (NULL);
}

for (k = 0; k < word_length; k++, j++)
words_array[i][k] = str[j];
words_array[i][k] = '\0';
}
words_array[i] = NULL;

return (words_array);
}

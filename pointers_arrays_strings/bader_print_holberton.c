#include <stdio.h>

int main(void)
{
char hol[9] = "holberton";
int i, j;

for (i = 0; i < 9; i++) {
if (i != 0) {
for (j = 0; j < i * 3; j++) {
putchar(' ');
}
}
putchar(hol[i]);
putchar('\n');
}

return 0;
}

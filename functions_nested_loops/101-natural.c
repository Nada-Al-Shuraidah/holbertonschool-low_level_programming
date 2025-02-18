#include "main.h"

int sum_multiples(void) {
int sum = 0;
int i;

for (i = 0; i < 1024; i++) {
if (i % 3 == 0 || i % 5 == 0) {
sum += i;
}
}
return (sum);
}

void print_number(int n) {
unsigned int num;

if (n < 0) {
_putchar('-');
num = -n;
} else {
num = n;
}

if (num / 10) {
print_number(num / 10);
}

_putchar((num % 10) + '0');
}

int main(void) {
int sum = sum_multiples();
print_number(sum);
_putchar('\n');
return (0);
}

// напечатать таблицу умножения на 7

#include <stdio.h>
int main() {

int a = 1;

while (a <= 10) {

int b = 7;

printf("%d x %d = %d", a, b, a * b);
printf("\n");

a++;
}
}

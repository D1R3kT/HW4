//Найти произведение всех чисел от 8 до n. Число n вводится с клавиатуры

#include <stdio.h>

int main() {

int number;
printf("Enter any number > 8\n");
scanf("%d", &number);

int b = 8;
int c = 0;

if (number < b){ 
printf("ERROR\nEnter number > 8\n");
}
else {
while (b <= number) {
c = c + b;
b++;
}
printf("%d\n", c);
}
return 0;
}

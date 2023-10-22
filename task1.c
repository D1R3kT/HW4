// Сделайте так, чтобы цифры выводились следующим образом:
//  1
// 2 1
// 3 2 1
// 4 3 2 1 
// 5 4 3 2 1

#include <stdio.h>
int main()
{
int outer = 1;
while (outer <= 5)
{
int inner = outer;
while (inner >= 1 ){
printf("%d", inner--);
}
// Вставляем символ новой строки в конце каждого ряда
printf("\n");
++outer;
}
return 0;
}




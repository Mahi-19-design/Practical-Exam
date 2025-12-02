#include <stdio.h>
int main(){

int a = 10;
int b = 5;

printf("Before the swap a = %d & b = %d\n",a,b);

a = a + b;
b = a - b;
a = a - b;

printf("After the swap a = %d & b = %d\n",a,b);


    return 0;
}
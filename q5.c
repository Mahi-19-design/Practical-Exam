#include <stdio.h>

int factorial (int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){

    int a;
printf("Enter a number:");
scanf("%d",&a);
factorial(a);

printf("The factorial of a number is %d",factorial(a));



    return 0;
}
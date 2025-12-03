  #include <stdio.h>
  int main(){

    int a ;
    
    printf("Enter an integer:\n");
    scanf("%d",&a);
    
    if(a>0){
        printf("The  integer is positive\n");
    }
    else if(a<0){
        printf("The integer is negative\n");
    }
    else{
        printf("The integer is Zero\n");
    }
    return 0;
  }
    
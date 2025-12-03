    #include <stdio.h>
    int main(){

    
////Que-3

int arr[7] = {20,32,6,7,22,47,21};
int largest = arr[0];
int smallest = arr[0];

for(int i = 0 ; i<7 ; i++){
    if(largest > arr[i]){
        largest = arr[i];
    }
    if(smallest < arr[i]){
        smallest = arr[i];
    }
}
printf("The largest no. is %d\n",largest);
printf("The smallest no. is %d\n",smallest);

return 0;
    }
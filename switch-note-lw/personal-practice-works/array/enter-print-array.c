#include<stdio.h>
int main(){
    int i,my_arr[10];
    printf("Enter 10 numbers: \n");
    for(i=0;i<=9;i++){
        scanf("%d",&my_arr[i]);
    }
    printf("Array elements are: \n");
    for(i=0;i<=9;i++){
        printf("%d \n",my_arr[i]);
    }
    return 0;
}

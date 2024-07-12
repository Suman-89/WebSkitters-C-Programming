#include<stdio.h>
int main(){
    int arr[] = {2,3,4,5,6,7,8};
    int num,i;
    printf("Enter your number: \n");
    scanf("%d",&num);
    for(i=0;i<=7;i++){
        if(arr[i]==num)
            printf("Number found in index value %d",i);
    }
    return 0;
}

//Searching Array Element using while loop
#include<stdio.h>
int main(){
    int arr[]={2,44,6,55,78,9,10};
    int num,i=0;
    printf("Enter your number: \n");
    scanf("%d",&num);
    while(i<=6){
        if(arr[i]==num)
            printf("Number found in index value: %d \n",i);
        i++;
    }
    do{
        if(arr[i]!=num)
            printf("Number does not exists");
        i++;
    }
    while(i<=6);
    return 0;
}

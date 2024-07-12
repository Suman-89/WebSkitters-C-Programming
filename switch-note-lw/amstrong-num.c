#include<stdio.h>
int main(){
    int sum=1,num,i=1;
    printf("Please enter your number: \n");
    scanf("%d",&num);
    while(i<=num){
       sum = sum * i;
       i++;
    }
    printf("result : %d",sum);
    return 0;
}

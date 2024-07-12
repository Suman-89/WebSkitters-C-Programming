// Checking prime number
#include<stdio.h>
int main(){
    int num,i,flag;
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num == 0|| num== 1){
        flag=1;
    }
    for(i=2;i<(num/2);i++){
        if(num%i==0){
            flag=1;
        }
    }
    if(flag==1){
            printf("Not a prime");
        }else{
            printf("Prime number ");
        }
        return 0;
}

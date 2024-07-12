//Palindrome numbers in a user defined range
#include<stdio.h>
int palindrome(int);
int main(){
    int n,i,start,end;
    printf("Enter starting range: \n");
    scanf("%d",&start);
    printf("Enter ending range :\n");
    scanf("%d",&end);
    int number[end];
    for(i=start;i<end;i++){
        n=i;
        if(n==palindrome(i)){
            printf("The number %d is a palindrome\n",palindrome(i));
        }
    }
    return 0;
}
int palindrome(int p){
    int temp,result=0;
    if(p==0){
        return 0;
    }
    while(p!=0){
        temp = p%10;
        result = (result * 10)+ temp;
        p/=10;
    }
    return result;
}

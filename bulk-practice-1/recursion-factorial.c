#include<stdio.h>
int facto();
int main(){
    int n;
    printf("Enter a number to calculate factorial: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,facto(n));
    return 0;
}
int facto(int num){
    if(num==0){
        return 0;
    }else if(num==1){
        return 1;
    }else{
        int fact = num*facto(num-1);
        return fact;
    }
}

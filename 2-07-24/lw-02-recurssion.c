//Sum of first 10 integers using recurssion
#include<stdio.h>
int sum(int);
int main(){
    int num=10;
    printf("Sum of first 10 digit is: %d",sum(num));
    return 0;
}
int sum(int k){
    if(k>0)
        return k+sum(k-1);
    else
        return 0;
}

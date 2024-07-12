#include<stdio.h>
int main(){
    int num, rev=0, rem;
    printf("Please enter your number: \n");
    scanf("%d",&num);
    do{
        rem = num %10;
        rev = rev*10+rem;
        num=num/10;
    }
    while(num!=0);
    printf("Reversed num is = %d",rev);
    return 0;
}

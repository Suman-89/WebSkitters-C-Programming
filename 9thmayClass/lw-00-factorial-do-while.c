#include<stdio.h>
int main(){
    int i=1,sum=1,n;
    printf("Enter your number: \t");
    scanf("%d",&n);
    do{
        sum=sum*i;
        i++;
    }
    while(i<=n);
    printf("Factorial is: %d",sum);
    return 0;
}

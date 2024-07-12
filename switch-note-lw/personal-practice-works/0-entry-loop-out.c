#include<stdio.h>
int main(){
    int n,sum=0;
    do{
        printf("Enter a number: \n");
        scanf("%d",&n);
        sum +=n;
    }
    while(n!=0);
    printf("Sum of entered numbers is: %d \n",sum);
    printf("Out of loop");
    return 0;
}

#include<stdio.h>
int main(){
    int num,i;
    printf("Enter a number: \n");
    scanf("%d",&num);
    int sum=num;
    for(i=num;i>=1;i--){
        sum = i*(num-1);
    }
    printf("Result is: %d \n",sum);
    return 0;
}

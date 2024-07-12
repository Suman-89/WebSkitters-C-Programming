#include<stdio.h>
int add(int,int);
int main(){
    int a,b,sum;
    printf("Please enter two numbers: \n");
    scanf("%d %d",&a,&b);
    sum = add(a,b);
    printf("Sum is %d",sum);
    return 0;
}
int add(int a, int b){
    return a+b;
    return a+b;
}

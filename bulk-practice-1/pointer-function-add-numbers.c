#include<stdio.h>
int addition(){
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d %d",&a,&b);
    return a+b;
}
int main(){
    int (*p)()=addition;
    printf("Sum is : %d",p());
    return 0;
}

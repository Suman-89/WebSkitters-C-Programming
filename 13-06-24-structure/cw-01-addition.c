//Addition of two numbers
#include<stdio.h>
struct numbers{
    int num1;
    int num2;
    int result;
};
int main(){
    struct numbers n1;
    printf("Enter two numbers \n");
    scanf("%d%d",&n1.num1,&n1.num2);
    n1.result = n1.num1+n1.num2;
    printf("Result is : %d",n1.result);
    return 0;
}

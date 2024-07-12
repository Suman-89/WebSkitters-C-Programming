#include<stdio.h>
int main(){
    int n1,n2;
    float result;
    char op;
    printf("Please enter two numbers: \n");
    scanf("%d %d",&n1,&n2);
    printf("Please enter a sign (+-*/): \n");
    scanf(" %c",&op);
    switch(op){
    case '+':
        result = n1+n2;
        printf("Result is: %0.2f",result);
        break;
    case '-':
        result = n1-n2;
        printf("Result is: %0.2f",result);
        break;
    case '*':
        result = n1*n2;
        printf("Result is: %0.2f",result);
        break;
    case '/':
        result = n1/n2;
        printf("Result is: %0.2f",result);
        break;
    default:
        printf("Invalid Operator");
    }
    return 0;
}

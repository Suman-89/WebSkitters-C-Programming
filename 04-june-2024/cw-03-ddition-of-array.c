#include<stdio.h>
int a,b;
int sum(int,int);
int sub(){
    int c = a-b; //a & b are copy of the global variable a & b declared above.
}
int mul(){
    int c = a*b;
}
int div(){
    int c = a/b;
}
int main() {
    int res,i=0;
    int (*ptr[4])();
    printf("Enter two numbers = \n");
    scanf("%d %d",&a,&b); //a & b are copy of the global variable a & b declared above.
    ptr[0]=sum;
    ptr[1]=sub;
    ptr[2]=mul;
    ptr[3]=div;
    printf("Sum Result = %d \n",sum(a,b));
    printf("Substraction Result = %d \n",sub(a,b));
    printf("Multiplication Result = %d \n",mul(a,b));
    printf("Division Result = %d",div(a,b));
    return 0;
}
int sum(a,b){ // if you do not declare the prototype of a function, then you have to write the function above main function.
    int c = a+b;
}

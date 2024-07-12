#include<stdio.h>
int swap(int,int);
int main(){
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d %d",&a,&b);
    printf("After swaping: \n");
    swap(a,b);
    return 0;
}
int swap(int a,int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
    printf(" a = %d and b = %d",a,b);
}

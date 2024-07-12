#include<stdio.h>
int main(){
int num;
printf("Please enter your number: ");
scanf("%d",&num);
num < 0 ?
printf("The number %d is a negative integer",num):
    printf("The number %d is a positive number",num);
return 0;
}

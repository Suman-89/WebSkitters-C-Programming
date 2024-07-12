#include<stdio.h>
int main(){
    int age;
    char sex;
    printf("Enter your age: \n");
    scanf("%d",&age);
    if(age >= 20){
    printf("Enter your sex: \n");
    scanf(" %c",&sex);
    if(sex == 'M' || sex == 'm')
        printf("You are an eligible voter");
    else
        printf("Other than male is not applicable");
    }else
    printf("Not Applicable ! **");
    return 0;
}

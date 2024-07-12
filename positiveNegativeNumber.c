#include<stdio.h>
int main(){
    int num;
    printf("Please enter your number: \n");
    scanf("%d",&num);
    if(num<0){
        printf("This is a negative integer");
    } else if(num == 0) {
        printf("This is neutral number");
    } else {
        printf("This is positive integer");
    }
    return 0;
}

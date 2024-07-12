#include<stdio.h>
int main(){
    int num, i=0;
    printf("Enter your number to determine: \n");
    scanf("%d",&num);
    if(num == 0)
        printf("This is single digit number with value zero");
    else{
        while(num !=0){
        num = num / 10;
        i++;
    }
    printf("The number of digit of the number is: %d",i);
    }
    return 0;
}

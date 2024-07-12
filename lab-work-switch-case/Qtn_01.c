#include<stdio.h>
int main(){
    int number, count = 0;
    printf("Enter the number: \n");
    scanf("%d",&number);
    while(number > 0){
                count++ ;
    number/=10;
    }
    printf("No. of digit is: %d",count);
    return 0;
}

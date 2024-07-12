#include<stdio.h>
int main(){
    int num=1,esum=0,osum=0,max;
    printf("Please enter your limit: \n");
    scanf("%d",&max);
    do{
        if(num%2==0){
            printf("Even number: %d \n",num);
            esum += num;
        }
        else{
            printf("Odd number: %d\n",num);
            osum += num;
        }
        num ++;
    }
    while(num<=max);
    printf("Sum of even numbers: %d \n",esum);
    printf("Sum of odd numbers: %d",osum);
    return 0;
}

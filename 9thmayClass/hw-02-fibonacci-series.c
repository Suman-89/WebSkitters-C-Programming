#include<stdio.h>
int main(){
    int num1=0,num2=1,result,i,len;
    printf("Please enter your no. of terms: \t");
    scanf("%d",&len);
    printf("Your Fibonacci Series is: \n");
    for(i=0;i<=len;i++){
        if(i<=1){
            result = i;
        }else{
            result = num1 + num2;
            num1 = num2;
            num2 = result;
        }
        printf("%d \t",result);
    }
    return 0;
}

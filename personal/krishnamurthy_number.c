//Krishnamurthy numbers in a user-defined range
#include<stdio.h>
int factorial(int);
int isKrishnamurthy(int);
int main(){
    int n,i,start,end;
    printf("Enter start digit: \n");
    scanf("%d",&start);
    printf("Enter end digit: \n");
    scanf("%d",&end);
    int num[end];
    printf("The Krishnamurthy numbers are: \n");
    for(i=start;i<end;i++){
        n=i;
        if(n == isKrishnamurthy(i)){
            printf("%d\t",isKrishnamurthy(i));
        }
    }
    return 0;
}
int isKrishnamurthy(int num){
    int temp,sum=0;
    while(num!=0){
        temp = num%10;
        sum+=factorial(temp);
        num/=10;
    }
    return sum;
}
int factorial(int num){
    int mul=1;
    while(num!=0){
        mul*=num;
        num--;
    }
    return mul;
}

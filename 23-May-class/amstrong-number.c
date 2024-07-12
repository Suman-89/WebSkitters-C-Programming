//Amstrong Number
#include<stdio.h>
#include<math.h>
int main(){
    int num,rem,temp,sum=0,cName;
    printf("Please enter a number: \t");
    scanf("%d",&num);
    cName = num;
    while(num != 0){
        rem = num%10;
        temp = rem*rem*rem;
        sum+=temp;
        num/=10;
    }
    printf("Amstrong calculation result is %d \n",sum);
    sum==cName?
    printf("The number %d is an Amstrong Number",cName):
    printf("Not an Amstrong Number");
    return 0;
}

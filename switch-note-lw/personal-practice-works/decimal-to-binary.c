//Decimal to binary conversion
#include<stdio.h>
int main(){
    int num;
    printf("Please enter a decimal number: \n");
    scanf("%d",&num);
    printf("Equivalent binary number is: \n");
    calc(num);
    return 0;
}
void calc(int n){
    int binary[32],i=0,j;
    if(n == 0){
        printf("0");
        return;
    }
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=(i-1);j>=0;j--){
        printf("%d",binary[j]);
    }
    return;
}

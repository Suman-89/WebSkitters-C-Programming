#include<stdio.h>
int main(){
    int i,n2,sum=0,count=0;
    printf("Enter end point of Fibonacci Series: \n");
    scanf("%d",&n2);
    int fibArr[n2];
    printf("Fibonacci series is: \n");
    fibArr[0] = 0;
    fibArr[1] = 1;
    printf("%d\t%d\t",fibArr[0],fibArr[1]);
    for(i=2;i<n2;i++){
        fibArr[i] = fibArr[i-1] + fibArr[i-2];
        printf("%d\t",fibArr[i]);
        if(i%2==0){
            sum+=fibArr[i];
            count++;
        }
    }
    printf("\nThe sum of even indexes upto %d terms = %d",count,sum);
    return 0;
}

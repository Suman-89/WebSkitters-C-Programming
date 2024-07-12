#include<stdio.h>
int main(){
    int f1=0,f2=1,sum,i,range;
    printf("Enter a range: ");
    scanf("%d",&range);
    printf("\nFibonacci series is: \n");
    printf("%d\t%d\t",f1,f2);
    for(i=2;i<range;i++){
       sum = f1 + f2;
       f1 = f2;
       f2 = sum;
       printf("%d\t",sum);
    }
    return 0;
}

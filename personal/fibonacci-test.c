// fibonacci series
#include<stdio.h>
int main(){
    int f1=0,f2=1,sum,i,n;
    printf("Enter limit --> ");
    scanf("%d",&n);
    printf("\n\nYour fibonacci series is: \n");
    printf("%d\t%d\t",f1,f2);
    for(i=2;i<n;i++){
        sum = f1+f2;
        printf("%d\t",sum);
        f1=f2;
        f2=sum;
    }
    return 0;
}

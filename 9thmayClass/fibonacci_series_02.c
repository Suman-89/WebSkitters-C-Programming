#include<stdio.h>
void fibonacci(int,int,int);
int main(){
    int f1=0,f2=1,n;
    printf("Please enter no. of terms: \t");
    scanf("%d",&n);
    printf("Your fibonacci series is: \n");
    printf("%d \t",f1);
    printf("%d \t",f2);
    fibonacci(f1,f2,n);
    return 0;
}
void fibonacci(int n1,int n2,int terms){
    int sum,i;
    for(i=3;i<=terms;i++){
        sum = n1+n2;
        printf("%d \t",sum);
        n1=n2;
        n2=sum;
    }
    return;
}

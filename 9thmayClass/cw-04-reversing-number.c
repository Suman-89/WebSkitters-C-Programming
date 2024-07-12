#include<stdio.h>
int main(){
    int n,rem,rev=0;
    printf("Enter A NUM -");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("res = %d",rev);
    return 0;
}

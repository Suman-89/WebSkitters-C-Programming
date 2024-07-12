#include<stdio.h>
int main(){
    int i,j,sp,n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    printf("\n-----------------------------\n");
    for(i = n ; i >= 1 ; i--){
            for(sp = n-i ; sp >= 1; sp--){
            printf(" ");
            }
            for(j = (2*i)-1 ; j >= 1; j--){
                if(j==1 || j == ((2*i)-1)|| i==n){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
    }
}

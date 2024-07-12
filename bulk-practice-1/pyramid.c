#include<stdio.h>
int main(){
    int n,i,j,sp;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    printf("\n-----------------------------\n");
    for(i = 1; i <= n/2; i++){
        for(sp = 1; sp <= n-i ; sp++){
            printf(" ");
        }
        for(j = 1; j <= ((2*i)-1); j++){
            printf("*");
        }
        printf("\n");
    }
    for(i = (n/2)-1; i >= 1; i--){
        for(sp = n-i; sp >= 1 ; sp--){
            printf(" ");
        }
        for(j = ((2*i)-1); j >= 1; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int i,j,sp,n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    printf("\n---------------------\n");
    for(i = 1 ; i <= n/2 ; i++){
            for(sp = 1 ; sp <= ((n/2)-i); sp++){
            printf(" ");
            }
            for(j = 1 ; j <= (2*i)-1; j++){
                if(j==1 || j == ((2*i)-1)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
    }
    for(i = n/2 ; i >= 1 ; i--){
            for(sp = ((n/2)-i) ; sp >= 1; sp--){
            printf(" ");
            }
            for(j = (2*i)-1 ; j >= 1; j--){
                if(j==1 || j == ((2*i)-1)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
    }
    return 0;
}

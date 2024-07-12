// Star pattern descending
#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=5;j>i;j--){
            printf("*\t");
        }
        printf("\n\n");

    }
    return 0;
}

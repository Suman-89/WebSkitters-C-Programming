#include<stdio.h>
int main(){
    int i,j,sp;
    for(i=0;i<7;i++){
            for(j=i;j>0;j--){
                printf("* ");
                printf("%d",j);
            }
            printf("\n");
    }
    return 0;
}

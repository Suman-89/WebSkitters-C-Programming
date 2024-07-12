#include<stdio.h>
int main(){
    int i,j,sp,row,col;
    printf("Enter no of row: \n");
    scanf("%d",&row);
    printf("Enter no of column: ");
    scanf("%d",&col);
    printf("\n----------------------------------\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(j==0||j==(col-1)||i==0||i==(row-1)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

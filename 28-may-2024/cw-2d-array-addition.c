#include<stdio.h>
int main(){
    int arr1[10][10]={{1,2},{3,4}};
    int arr2[10][10]={{5,6},{7,8}};
    int arr3[10][10];
    int row, col;
    printf("Enter no. of rows: \n");
    scanf("%d",&row);
    printf("Enter no. of columns: \n");
    scanf("%d",&col);
    printf("Enter array elements for array1: \n");
    for(int i=0;i<=(row-1);i++){
        for(int j=0;j<=(col-1);j++){
            scanf("%d",&arr1[i][j]);
        }
       printf("\n");
    }
    printf("Enter array elements for array2: \n");
    for(int i=0;i<=(row-1);i++){
        for(int j=0;j<=(col-1);j++){
            scanf("%d",&arr2[i][j]);
        }
       printf("\n");
    }
    for(int i=0;i<=(row-1);i++){
        for(int j=0;j<=(col-1);j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d \t",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

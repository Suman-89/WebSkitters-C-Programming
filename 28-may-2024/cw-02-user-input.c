#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter array elements: \n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("Array elements are: \n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

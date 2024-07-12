#include<stdio.h>
int main(){
    int arr[2][2]={{2,4},{6,8}};
    //printing single element of the array
    printf("%d \n",arr[1][0]); //this will print 6
    //printing all elements using loop, we use nested loop
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

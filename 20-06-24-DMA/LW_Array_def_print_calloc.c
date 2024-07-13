#include<stdio.h>
int main(){
    int n,i;
    printf("Enter no. of size: \n");
    scanf("%d",&n);
    printf("----------------------\n");
    int *ptr = (int *)malloc(n*sizeof(int));
    printf("Enter array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("\n\nPrinting array elements: \n");
    printf("---------------------------\n");
    for(i=0;i<n;i++){
        printf("Array element of index %d is %d \n",i,ptr[i]);
    }
    free(ptr);
    return 0;
}

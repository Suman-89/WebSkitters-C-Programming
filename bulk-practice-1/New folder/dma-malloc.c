#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i, *ptr;
    printf("Enter the limit: \n");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    printf("Enter no to memory: \n");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("Value at index %d is : %d\n",i,ptr[i]);
    }
    free(ptr);
    return 0;
}

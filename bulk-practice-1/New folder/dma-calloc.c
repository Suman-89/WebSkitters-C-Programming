#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,exlim, *ptr;
    printf("Enter the limit: \n");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    printf("Enter no to memory: \n");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("Value at index %d is : %d\n",i,ptr[i]);
    }
    printf("Now enter extended limit: ");
    scanf("%d",&exlim);
    int *temp = (int *)realloc(ptr,exlim*sizeof(int));
    ptr = temp;
    printf("Enter again nos to memory: \n");
    for(i=n;i<exlim;i++){
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<exlim;i++){
        printf("Value at index %d is : %d\n",i,ptr[i]);
    }
    free(ptr);
    return 0;
}


//malloc & realloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("Enter size : ");
    scanf("%d",&n);
    printf("\n------------------------\n");
    int *ptr =(int *)malloc(n*sizeof(int));
    printf("Enter array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    //Reallocating array size
    ptr =  (int *)realloc(ptr,(n+6)*sizeof(int));
    for(i=n;i<(n+6);i++){
        ptr[i]=i+1;
    }
    printf("Print array elements: \n");
    for(i=0;i<(n+6);i++){
        printf("%d\t",ptr[i]);
    }
    free(ptr);
    return 0;
}

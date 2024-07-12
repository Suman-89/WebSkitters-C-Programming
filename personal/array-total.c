#include<stdio.h>
int main(){
    int arr[10],i,n,sum=0;
    printf("Sum of elements");
    printf("\n----------------------\n\n");
    printf("Enter limit: \t");
    scanf("%d",&n);
    //entering array elements
    printf("\n\nEnter elements:");
    printf("\n----------------------\n\n");
    for(i=0;i<n;i++){
        printf("Value of index %d:",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum of elements: %d",sum);
    return 0;
}


//shorting and copy of two arrays into one array
#include<stdio.h>
int main(){
    int arr1[10],arr2[10],i,n1,n2,n3,j,temp;
    printf("Enter limit for array 1----> ");
    scanf("%d",&n1);
    printf("\nEntering elements for array 1");
    printf("\n----------------------------------------\n");
    for(i=0;i<n1;i++){
        printf("Value of index %d \t",i);
        scanf("%d",&arr1[i]);
        printf("\n");
    }
    printf("\n\nEnter limit for array 2----> ");
    scanf("%d",&n2);
    printf("\n\nEntering elements for array 2");
    printf("\n----------------------------------------\n");
    for(i=0;i<n2;i++){
        printf("Value of index %d\t",i);
        scanf("%d",&arr2[i]);
        printf("\n");
    }
    printf("\n\nAfter sorting of array elements\n");
    printf("-----------------------------------------------\n");
    n3=n1+n2;
    int arr3[n3];
    for(i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for(j=0;j<n2;j++){
        arr3[i]=arr2[j];
        i++;
    }
    for(i=0;i<n3;i++){
        for(j=i+1;j<n3;j++){
            if(arr3[i]<arr3[j]){
                temp = arr3[j];
                arr3[j]=arr3[i];
                arr3[i]=temp;
            }
        }
    }
    for(i=0;i<n3;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}

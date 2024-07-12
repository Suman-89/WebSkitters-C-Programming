//copy elements
#include<stdio.h>
int main(){
    int n,arr1[10],arr2[10],i;
    printf("Please enter temrs: \n");
    scanf("%d",&n);
    printf("Enter %d numbers: \n",n);
    for(i=0;i<=(n-1);i++){
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
    }
    printf("Elements of arr2 after copying: \n");
    for(i=0;i<=(n-1);i++){
        printf("Index %d holds : %d \n",i,arr2[i]);
    }
    return 0;
}

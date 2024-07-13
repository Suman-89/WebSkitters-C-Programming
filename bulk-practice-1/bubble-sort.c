//bubble sorting
#include<stdio.h>
int main(){
    int arr[10],i,n,j,temp;
    printf("Enter size :");
    scanf("%d",&n);
    printf("Enter element:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("After sorting: \n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

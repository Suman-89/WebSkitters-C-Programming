#include<stdio.h>
int main(){
    int arr[30],n,i,j;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elemnts: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    printf("%d",arr[i]);
                }
        }
    }
    return 0;
}

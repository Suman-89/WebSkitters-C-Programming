//printing unique number from an array
#include<stdio.h>
int main(){
    int arr[20],n,i,j,flag=0;
    printf("Enter limit: \n");
    scanf("%d",&n);
    printf("Enter numbers: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The unique numbers: \n");
    for(i=0;i<n;i++){
            int flag=0;
       for(int j=0;j<n;j++){
           if(i!=j){
            if(arr[i]==arr[j]){
                flag=1;
            }
           }
       }
    if(flag==0){
        printf("%d\t",arr[i]);
    }
    }
return 0;
}

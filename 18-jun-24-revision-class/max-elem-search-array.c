//Maximum element searching
#include<stdio.h>
int main(){
    int arr[20],n,i,max;
    printf("Enter maximum array limit:");
    printf("\n---------------------------\n\n");
    //Entering the limit
    scanf("%d",&n);
    printf("\n---------------------------\n\n");
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        printf("Value of index %d -->",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\nMaximum number in the array: \n");
    for(i=0;i<n;i++){
        max=arr[0];
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}

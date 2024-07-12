#include<stdio.h>
int main(){
    int arr[10],i,j,n,rep;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++){
        printf("element - %d :",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    printf("Expected Output :\n");
    printf("The frequency of all elements of an array :\n");
    for(i=0;i<n;i++){
        rep=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                rep+=1;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d occurs %d times",arr[i],rep);
        printf("\n");
    }
    return 0;
}

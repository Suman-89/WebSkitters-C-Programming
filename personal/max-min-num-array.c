//Maximum & minimum number from an array
#include<stdio.h>

int main(){
    int num[20],n,i;
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    printf("\n--------------------------------\n");
    printf("Enter numbers into the array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int max = num[0];
    int min = num[0];
    for(i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    for(i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }

    printf("Maximum  number is: %d\n",max);
    printf("Minimum number is: %d",min);
    return 0;
}



//find out the highest and lowest in an array.
#include<stdio.h>
int main(){
    int number[10],i,n,max,min;
    printf("lease enter not of terms: \n");
    scanf("%d",&n);
    printf("Enter numbers to the array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    max = number[0];
    min = number[1];
    for(i=0;i<n;i++){
        if(number[i]>number[0]){
            max = number[i];
        }
    }
    for(i=0;i<n;i++){
        if(number[i]<number[1]){
            min = number[i];
        }
    }
    printf("Highest number is: %d\n",max);
    printf("Lowest number is: %d",min);
    return 0;
}

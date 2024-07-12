//Sum of all elements of an array
#include<stdio.h>
int main(){
    int n,arr[10],i,sum=0;
    printf("Please enter temrs: \n");
    scanf("%d",&n);
    printf("Enter %d numbers: \n",n);
    for(i=0;i<=(n-1);i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("The sum of elements is: %d\t",sum);
    return 0;
}

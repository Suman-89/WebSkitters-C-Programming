#include<stdio.h>
int main(){
    int terms,i,arr[10];
    printf("Please enter temrs: \n");
    scanf("%d",&terms);
    printf("Enter %d no. of terms \n",terms);
    for(i=0;i<=(terms-1);i++){
        scanf("%d",&arr[i]);
    }
    printf("The numbers are: \n");
    for(i=(terms-1);i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
}

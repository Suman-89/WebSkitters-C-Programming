#include<stdio.h>
int main(){
    int arr[]={3,4,2,5,6,7};
    int *pt=arr; // pt stores the values of first index address's value.
    printf("%d \n",*pt);
    for(int i=0;i<=5;i++){
       // *pt = &arr[i];
        printf("%d \n",(*pt+i));
    }
    return 0;
}

#include<stdio.h>
int main(){
    int arr[]={2,4,6,7,8};
    int length;
    length = sizeof(arr)/sizeof(arr[0]); //we can put any index value instead of putting 0 .
    printf("Array length is = %d \n",length);
    return 0;
}

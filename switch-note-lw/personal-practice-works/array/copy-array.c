#include<stdio.h>
#include<string.h>
int main(){
    char my_arr[20],new_arr[20];
    int i;
    printf("Enter array elements: \n");
    for(i=0;i<=19;i++){
        scanf("%s",&my_arr[i]);
    }
    size_t n = strlen(my_arr);
    for(i=0;i<=(n-1);i++){
        new_arr[i]=my_arr[i];
    }
    printf("Copied Array is: \n");
    for(i=0;i<=(n-1);i++){
        printf("%s",new_arr[i]);
    }
    return 0;
}

#include<stdio.h>
int my_arr[10];
int findElement(int, int);
int main(){
    int i,size,element,newVar;
    char request;
    printf("Enter the size of the array: \n");
    scanf("%d",&size);
    printf("Enter %d numbers in the array:",size);
    for(i=0;i<=(size-1);i++){
        scanf("%d",&my_arr[i]);
    }
    printf("Enter the element you want to search for:");
    scanf("%d",&element);
    if(findElement(element,size)!=0){
        printf("Element found in the array \n");
        printf("Do you want to replace it ? (y/n)");
        scanf(" %c",&request);
        if(request=='y'){
            printf("Enter the number to replace %d with:",element);
            scanf("%d",&newVar);
            printf("Element replaced successfully. \n");
            printf("Updated Array: \n");
            for(i=0;i<=(size-1);i++){
                printf("%d \t",my_arr[i]);
            }
        }
    };
    return 0;
}
int findElement(int e, int s){
    int count = 0;
    for(int j=0;j<=(s-1);j++){
        if(e == my_arr[j])
            count+=1;
    }
    return count;
}

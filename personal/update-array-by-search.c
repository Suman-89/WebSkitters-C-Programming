#include<stdio.h>
int main(){
    int num[20],n,i,search_elem,elem;
    char request;
    printf("Enter Array limit: ");
    scanf("%d",&n);
    printf("\n---------------------------------\n\n");
    printf("Enter array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    printf("Which number do you want to search in the array?\n");
    scanf("%d",&search_elem);
    for(i=0;i<n;i++){
        if(num[i]==search_elem){
            printf("Element found in index %d",i);
            break;
        }
    }
    printf("Do you want to replace it ? (Y/N)");
    scanf(" %c",&request);
    for(i=0;i<n;i++){
        if(num[i]==search_elem){
            printf("Enter element in index %d",i);
            scanf("%d",&elem);
            num[i]=elem;
            printf("Array is : \n");
            printf("%d", num[i]);
        }
    }
    return 0;
}

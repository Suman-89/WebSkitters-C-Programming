//Linear Searching in array
#include<stdio.h>
int main(){
    int arr[3],num,i,found,element,l;
    printf("Enter length for the array: \n");
    scanf("%d",&l);
    printf("Enter %d numbers \n",l);
    for(element=1;element<=l;element++){
        scanf("%d",&arr[element]);
    }
    printf("Enter your number to search \n");
    scanf("%d",&num);
    //Searching Loop
    for(i=0;i<=2;i++){
        if(arr[i]==num){
            found=1;
            break;
        }
        else{
            found=0;
        }
    }
    if(found=1)
        printf("Number found \n");
    else
        printf("Number not found");
    return 0;
}

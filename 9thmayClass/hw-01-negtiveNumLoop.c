#include<stdio.h>
int main(){
    int i;
    printf("Please enter a number (Enter negative number to exit): \n \n");
    do{
            printf("Enter a number: \t");
            scanf("%d",&i);
            printf("You have entered: %d \n \n",i);
    }while(i>=0);
    printf("Negative number entered. Exiting loop. \n \n",i);
    return 0;
}

#include<stdio.h>
int main(){
    int num;
    do{
        printf("Enter a number: \n");
        scanf("%d",&num);
        if(num<0){
            printf("Negative number entered. Exiting loop \n");
            break;
        }
    }
    while(num>=0);
    return 0;
}

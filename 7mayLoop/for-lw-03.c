#include<stdio.h>
int main(){
    int i,p,mul;
    printf("Please enter any number: \n");
    scanf("%d",&i);
    for(p=1;p<=10;p++){
        mul = i*p;
        printf("Table is: %d * %d = %d \n",i,p,mul);
    }
    return 0;
}

// WAP to add two numbers using the pointer array function.
#include<stdio.h>
int sum();
int main(){
    int (*numb[3])();
    printf("Enter numbers: \n");
    for(int i=0;i<2;i++){
        scanf("%d",&numb[i]);
    }
    int c = sum(numb);
    printf("The sum is : %d",c);
    return 0;
}
int sum(int numb){
    numb[2] = numb[0]+ numb[1];
    return *numb[2];
}

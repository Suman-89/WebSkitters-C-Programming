#include<stdio.h>
int main(){
    int i = 2;
    {
        int i = 99;
        printf("local %d \n",i);
    }
    printf("global %d",i);
    return 0;
}

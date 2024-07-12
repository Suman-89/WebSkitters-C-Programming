#include<stdio.h>
int main(){
    int num,result=1;
    printf("Enter the number: \n");
    scanf("%d",&num);
    while(num!=0){
        result=result*num;
        num-=1;
    }
    printf("Facto: %d",result);
    return 0;
}
